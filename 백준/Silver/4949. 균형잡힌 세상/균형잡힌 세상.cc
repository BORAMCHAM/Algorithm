/* 4949번 균형잡힌 세상 (C++) */
#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool Check(string str) {
	stack<char> check;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '(' || str[i] == '[') check.push(str[i]);
		else if (str[i] == ')') {
			if (!check.empty() && check.top() == '(') check.pop();
			else return false;
		}
		else if (str[i] == ']') {
			if (!check.empty() && check.top() == '[') check.pop();
			else return false;
		}
	}

	if (!check.empty()) return false;

	return true;
}

int main(void) {
	string str = "";

	while (true) {
		getline(cin, str);

		if (str == ".") break;
		
		if (Check(str)) cout << "yes" << "\n";
		else cout << "no" << "\n";
	}
	
	return 0;
}

