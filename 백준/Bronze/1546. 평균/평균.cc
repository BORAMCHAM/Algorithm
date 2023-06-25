/* 1546번 평균 (C++) */
#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	// 시험 본 과목 개수
	int N;
	cin >> N;

	// 세준이의 현재 성적(점수)
	int score[1000];
	for (int i = 0; i < N; i++) {
		cin >> score[i];
	}

	// 세준이 점수 중 최댓값
	int M = *max_element(score, score + N);

	double newScore[1000];
	double sum = 0;
	double avg = 0;

	for (int i = 0; i < N; i++) {
		// 점수를 "원래점수 / M * 100"으로 수정
		newScore[i] = (double)score[i] / (double)M * 100;
		sum += newScore[i];
	}

	avg = sum / N;
	cout << avg;
	return 0;
}

