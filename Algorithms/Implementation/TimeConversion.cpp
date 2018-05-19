/*
	Time Conversion
	https://www.hackerrank.com/challenges/time-conversion/problem
*/
#include <string>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

/*
* Complete the timeConversion function below.
*/
string timeConversion(string s) {


	stringstream ss(s);

	vector<string> tokens;
	string token;
	while (getline(ss, token, ':')) {
		if (!token.empty())
			tokens.push_back(token);
	}

	string format = tokens[2].substr(tokens[2].size() - 2, 2);
	tokens[2].erase(tokens[2].size() - 2);

	if (format == "PM" || format == "pm" || format == "Pm") {
		if (tokens[0] != "12")
			tokens[0] = to_string(stoi(tokens[0]) + 12);
	}
	else if (tokens[0] == "24" || tokens[0] == "12") {
		tokens[0] = "00";
	}

	return tokens[0] + ":" + tokens[1] + ":" + tokens[2];
}

int main() {
	string s;
	getline(cin, s);

	string result = timeConversion(s);

	cout << result << endl;



	return 0;
}
