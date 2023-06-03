/* 2839번 문자열 (C언어) */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	// 배달해야하는 설탕 무게 N
	int N;
	scanf("%d", &N);

	// 상근이가 배달하는 설탕봉지 수 cnt
	 int cnt = 0;

	// 입력받은 N의 값이 0보다 크면 while문 실행
	while (N > 0) {
		// 5킬로그램 봉지 사용 : 만약 N을 5로 나누었을 때 나머지가 0이라면
		if (N % 5 == 0) {
			// 설탕봉지 수 (cnt) 1씩 추가하고
			cnt += 1;
			// 입력받은 설탕무게 N에서 5킬로그램 빼기
			N -= 5;
		}

		// 3킬로그램 봉지 사용 : 나머지가 0이 아니라면
		else {
			// 설탕봉지 수 (cnt) 1씩 추가하고
			cnt += 1;
			// 입력받은 설탕무게 N에서 3킬로그램 빼기
			N -= 3;
		}
	}

	// 만약 정확하게 N킬로그램을 만들 수 없다면 -1을 출력
	if (N < 0)
		printf("-1\n");

	// N킬로그램을 정확하게 나눌 수 있다면 상근이가 배달하는 설탕봉지 개수 출력
	else 
		printf("%d\n", cnt);

	return 0;
}
