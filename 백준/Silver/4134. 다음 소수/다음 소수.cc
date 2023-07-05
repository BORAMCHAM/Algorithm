/* 4134번 다음 소수 (C++) */
#include <iostream>

using namespace std;

// 소수 판별 함수
bool isPrime(long long num) {
	if (num <= 1) return false;
	else if (num == 2 || num == 3) return true;
	else if (num % 2 == 0 || num % 3 == 0) return false;

	for (long long i = 5; i * i <= num; i++)
		if (num % i == 0 || num % (i + 2) == 0) return false;

	return true;
}

int main(void) {
	// 테스트 케이스 T
	int T;
	cin >> T;

	long long n;

	for (int i = 0; i < T; i++) {
		cin >> n;
		while (!isPrime(n))
			n++;
		cout << n << "\n";
	}
	
	return 0;
}

