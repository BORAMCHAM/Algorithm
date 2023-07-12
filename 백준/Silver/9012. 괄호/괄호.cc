/* 9012번 괄호 (C++) */
#include <iostream>
#include <stack>

using namespace std;

bool VPS_Check(string str) {
	stack<char> vps;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '(') vps.push(str[i]);
		else {
			if (!vps.empty()) vps.pop();
			else return false;
		}
	}

	return vps.empty();
}

int main(void) {
	// 테스트 케이스 T
	int T;
	cin >> T;

	string ps;
	stack<char> vps;

	for (int i = 0; i < T; i++) {
		cin >> ps;

		if (VPS_Check(ps)) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}

