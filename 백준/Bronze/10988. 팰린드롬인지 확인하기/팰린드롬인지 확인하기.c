/* 10988번 팰린드롬인지 확인하기 (C언어) */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	// 단어의 길이는 1보다 크거나 같고 100보다 작거나 같음
	char str[100] = { "\n" , };
	scanf("%s", str);

	// 단어 길이를 반으로 나누어서 팰린드롬인지 확인하는 반복문
	for (int i = 0; i < strlen(str) / 2; i++) {
		// 만약 str[i]와 str[strlen(str) - 1 - i]와 다르면 팰린드롬이 아니므로
		if (str[i] != str[strlen(str) - 1 - i]) {
			printf("0");
			return 0;
		}
	}
	printf("1");
	return 0;
}

