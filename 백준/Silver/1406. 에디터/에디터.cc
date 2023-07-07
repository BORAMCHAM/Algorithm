/* 1406번 에디터 (C++) */
#include <iostream>
#include <stack>

using namespace std;

int main(void) {
	// 초기에 편집기에 입력되어 있는 문자열 str
	string str = "";
	cin >> str;
	
	// 문자열 str의 길이 N
	int N = str.length();

	// 커서가 문자열 오른쪽에 있는 left_str
	// 말 그대로 커서 왼쪽에 문자열 있음
	stack<char> left_str;
	// 커서가 문자열 왼쪽에 있는 right_str
	// 말 그래도 커서 오른쪽에 문자열 있음
	stack<char> right_str;

	for (int i = 0; i < N; i++) {
		// left_str 스택에 str 데이터 추가
		left_str.push(str[i]);
	}

	// 편집기가 지원하는 명령어 cmd
	// 명령어 P를 입력했을 경우 커서 왼쪽에 추가할 문자 character
	char cmd, character;

	// 입력할 명령어의 개수를 나타내는 정수
	int M;
	cin >> M;

	for (int i = 0; i < M; i++) {
		cin >> cmd;

		// 명령어 'L' : 커서를 왼쪽으로 한 칸 옮김 (커서가 문장 맨 앞이면 무시)
		// 입력한 cmd가 명령어 "L"이라면
		if (cmd == 'L') {
			// 만약 커서가 문장의 맨 앞이면 무시
			if (left_str.empty()) {
				continue;
			}
			// 커서 왼쪽으로 한 칸 옮김
			else {
				right_str.push(left_str.top());
				left_str.pop();
				// cout << right_str.top() << "\n";
			}
		}

		// 명령어 'D' : 커서를 오른쪽으로 한 칸 옮김 (커서가 문장 맨 앞이면 무시)
		// 입력한 cmd가 명령어 "D"이라면
		else if (cmd == 'D') {
			// 만약 커서가 문장의 맨 뒤이면 무시
			if (right_str.empty()) {
				continue;
			}
			else {
				left_str.push(right_str.top());
				right_str.pop();
				// cout << left_str.top() << "\n";
			}
		}

		// 명령어 'B' : 커서 왼쪽에 있는 문자를 삭제 (커서가 문장 맨 앞이면 무시)
		// 입력한 cmd가 명령어 "B"이라면
		else if (cmd == 'B') {
			// 만약 커서가 문장의 맨 앞이면 무시
			if (left_str.empty()) {
				continue;
			}
			// 커서 왼쪽에 있는 문자 삭제
			left_str.pop();
			// cout << left_str.top() << "\n";
		}

		// 입력한 cmd가 명령어 "P"이라면 문자를 커서 왼쪽에 추가
		else if (cmd == 'P') {
			// 입력받은 character를 커서 왼쪽에 추가
			cin >> character;
			left_str.push(character);
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

	return 0;
}

