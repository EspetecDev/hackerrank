/*
	Attribute Parser 
	https://www.hackerrank.com/challenges/attribute-parser
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;


int main() {
	
	int lines, queries;
	vector<string> content;

	cin >> lines;
	cin >> queries;

	for (auto i = 0; i < lines; i++) {

		string line;
		getline(cin, line);
		content.push_back(line);	
	}

	for (auto i = 0; i < queries; i++) {

		string line;
		getline(cin, line);


	}

	return 0;
}
