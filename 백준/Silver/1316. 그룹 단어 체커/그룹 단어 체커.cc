/* 1316번 그룹 단어 체커 (C++) */
#include <iostream>

using namespace std;

int main(void) {
	// 단어의 개수
	int N;
	cin >> N;

	string str;
	int cnt = 0;

	for (int i = 0; i < N; i++) {
		cin >> str;

		// 문자 개수가 1개 또는 2개인 경우는 그룹 단어
		if (str.length() >= 3) {
			for (int j = 0; j < str.length() - 2; j++) {
				// 만약 같이 않으면
				if (str[j] != str[j + 1]) {
					// str[j]와 같은 문자를 'j+2'번째부터 찾음
					if (str.find(str[j], j + 2) != string::npos) {
						// 찾은 경우 cnt++
						cnt++;
						break;
					}
				}
			}
		}
	}
	
	cout << N - cnt;
	return 0;
}

