/* 13241번 최소공배수 (C++) */
#include <iostream>

using namespace std;

long long int gcd(long long int a, long long int b) {
	long long int c;

	while (b != 0) {
		c = a % b;
		a = b;
		b = c;
	}

	return a;
}

int main(void) {
	long long int A, B;
	cin >> A >> B;
	cout << (A * B) / gcd(A, B);
	return 0;
}

