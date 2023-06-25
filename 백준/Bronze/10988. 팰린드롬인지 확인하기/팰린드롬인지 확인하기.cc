/* 10988번 팰린드롬인지 확인하기 (C++) */
#include <iostream>
#include <string>

using namespace std;

int main(void) {
	// 단어의 길이는 1보다 크거나 같고 100보다 작거나 같음
	string str;
	cin >> str;

	// 단어 길이를 반으로 나누어서 팰린드롬인지 확인하는 반복문
	for (int i = 0; i < str.length() / 2; i++) {
		// 만약 str[i]와 str[strlen(str) - 1 - i]와 다르면 팰린드롬이 아니므로
		if (str[i] != str[str.length() - 1 - i]) {
			cout << 0;
			return 0;
		}
	}
	cout << 1;
	return 0;
}

