/* 27433번 팩토리얼 2 (C++) */
#include <iostream>

using namespace std;

// 팩토리얼 함수
long long factorial(int N) {
	long long result = 1;
	for (int i = N; i > 0; i--) result *= i;
	return result;
}

int main(void) {
	int N;
	cin >> N;
	cout << factorial(N);
	return 0;
}

