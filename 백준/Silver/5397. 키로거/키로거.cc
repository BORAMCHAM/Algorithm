/* 5397번 키로거 (C++) */
#include <iostream>
#include <stack>

using namespace std;

int main(void) {
	// 테스트 케이스 T
	int T;
	cin >> T;

	// 입력받을 문자열 str
	string str;

	// 커서가 문자열 오른쪽에 있는 left_str (말 그대로 커서 왼쪽에 문자열 있음)
	stack<char> left_str;
	// 커서가 문자열 왼쪽에 있는 right_str (말 그래도 커서 오른쪽에 문자열 있음)
	stack<char> right_str;

	for (int i = 0; i < T; i++) {
		cin >> str;
		// cout << str << "\n";

		// 입력된 문자열 str의 길이 L
		int L = str.length();

		for (int j = 0; j < L; j++) {
			if (str[j] == '<') {
				if (left_str.empty()) {
					continue;
				}
				else {
					right_str.push(left_str.top());
					left_str.pop();
					// cout << right_str.top() << "\n";
				}
			}

			else if (str[j] == '>') {
				if (right_str.empty()) {
					continue;
				}
				else {
					left_str.push(right_str.top());
					right_str.pop();
					// cout << left_str.top() << "\n";
				}
			}

			else if (str[j] == '-') {
				if (left_str.empty()) {
					continue;
				}
				left_str.pop();
				// cout << left_str.top() << "\n";
			}

			else {
				left_str.push(str[j]);
				// cout << left_str.top() << "\n";
			}
		}

		while (!left_str.empty()) {
			right_str.push(left_str.top());
			// cout << left_str.top();
			left_str.pop();
		}

		// cout << "\n";

		while (!right_str.empty()) {
			cout << right_str.top();
			right_str.pop();
		}

		cout << "\n";
	}

	return 0;
}

