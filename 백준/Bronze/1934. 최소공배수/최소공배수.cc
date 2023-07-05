/* 1934번 최소공배수 (C++) */
#include <iostream>

using namespace std;

// 최대공약수 구하는 함수
int gcd(int a, int b) {
	int c;

	while (b != 0) {
		c = a % b;
		a = b;
		b = c;
	}

	return a;
}

int main(void) {
	// 테스트 케이스의 개수
	int T;
	cin >> T;

	// 두 자연수 A, B와 최소공배수 lcd
	int A, B, lcd;

	for (int i = 0; i < T; i++) {
		cin >> A >> B;

		// 최소공배수 = (A × B) / 최대공약수
		lcd = (A * B) / gcd(A, B);
		cout << lcd << "\n";
	}

	return 0;
}

