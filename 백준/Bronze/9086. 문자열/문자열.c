/* 9086번. 문자열 (C언어) */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strlen 함수가 선언된 헤더 파일

int main(void) {
	int T;	// 테스트 케이스의 개수 T
	scanf("%d", &T); // T값 입력 받음 ('예제 입력 1' 3에 해당)

	/* 크기가 1000인 char형 배열 선언
		- 입력받은 문자열을 저장할 공간
		- 문자열의 길이는 1000보다 작음
		- 문자열의 끝을 나타내기 위해 NULL 문자 추가
	*/
	char str[1000] = { '\0' , };

	// 입력받은 테스트 케이스의 개수인 T만큼 반복
	for (int i = 0; i < T; i++) {
		scanf("%s", str); // 문자열 입력 받아 배열 str에 저장

		/* 문자열 길이 구하는 strlen 함수 사용
			- NULL 값을 제외하기 위해 str 길이에서 1을 뺌
		*/
		printf("%c%c\n", str[0], str[strlen(str) - 1]);
	}
	return 0;
}