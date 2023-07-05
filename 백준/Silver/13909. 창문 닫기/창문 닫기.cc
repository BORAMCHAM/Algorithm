/* 13909번 창문 닫기 (C++) */
#include <iostream>

using namespace std;

int main(void) {
	// 창문의 개수와 사람 수
	int N;
	cin >> N;

	// 마지막에 열려있는 창문 수
	int cnt = 0;

	for (int i = 1; i * i <= N; i++)
		cnt++;

	cout << cnt;
	return 0;
}

