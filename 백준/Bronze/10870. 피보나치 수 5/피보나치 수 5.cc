/* 10870번 피보나치 수 5 (C++) */
#include <iostream>

using namespace std;

// 피보나치 함수
int fibo(int n) {
	if (n >= 2) return fibo(n - 1) + fibo(n - 2);
	else if (n == 1) return 1;
	else return 0;	
}

int main(void) {
	int n;
	cin >> n;
	cout << fibo(n);
	return 0;
}

