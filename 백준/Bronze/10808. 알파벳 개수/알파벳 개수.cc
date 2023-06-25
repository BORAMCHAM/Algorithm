/* 10808번 알파벳 개수 (C++) */
#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	string S;
	cin >> S;

	// 소문자 a ~ z는 아스키코드에서 97 ~ 122 
	for (int i = 97; i <= 122; i++)
		// count 함수 사용
		cout << count(S.begin(), S.end(), i) << ' ';

	return 0;
}

