/* 1747번 소수&팰린드롬 (C++) */
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

// 에라토스테네스의 체(소수 판별) 함수
bool isPrime(int num) {
	if (num < 2) return false;
	for (int i = 2; i < num; i++) {
		if (num % i == 0) return false;
	}
	return true;
}

// 팰린드롬 함수
bool Pal(int N) {
	// 입력받은 숫자 N을 문자열로 변환
	string str = to_string(N);
	string a = str;
	reverse(str.begin(), str.end());
	if (a == str) return true;
	return false;
}

int main(void) {
	int N;
	cin >> N;

	// i를 입력받은 N의 값으로 잡고 증가시킴
	for (int i = N;; i++) {
		// 만약 i가 소수이고 팰린드롬이면
		if (Pal(i)) {
			if (isPrime(i)) {
				cout << i;
				return 0;
			}
		}
	}
}