/* 2903번 중앙 이동 알고리즘 (C++) */
#include <iostream>

using namespace std;

int main(void) {
	int N;
	cin >> N;

	int dot = 2;
	for (int i = 1; i <= N; i++) 
		dot = dot * 2 - 1;

	cout << dot * dot;
	return 0;
}

