/* 2851번 슈퍼 마리오 (C++) */
#include <iostream>

using namespace std;

int main (void) {
	// 10개의 버섯
	int mush[10];
	int sum = 0;

	// 버섯 점수 입력 반복문
	for (int i = 0; i < 10; i++) 
		cin >> mush[i];
	
	// 마리오가 먹은 버섯 점수 반복문
	for (int i = 0; i < 10; i++) {
		if (abs(100 - sum) >= abs(100 - (sum + mush[i])))
			sum += mush[i];
		else
			break;
	}
	cout << sum;
	return 0;
}

