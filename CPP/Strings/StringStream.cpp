/*/
	String Stream
	https://www.hackerrank.com/challenges/c-tutorial-stringstream
*/
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	
	vector<int> result;
	int i;
	stringstream ss(str);
	ss.str(str);
	while (ss >> i) {
		
		result.push_back(i);

		if (ss.peek() == ',')
			ss.ignore();
	}

	return result;
}

int main2() {
	string str;
	cin >> str;
	vector<int> integers = parseInts(str);
	for (int i = 0; i < integers.size(); i++) {
		cout << integers[i] << "\n";
	}

	return 0;
}