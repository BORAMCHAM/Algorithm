/* 1920번 수 찾기 (C++) */
#include <iostream>
#include <algorithm>

using namespace std;

int N, M;
int arr[100000];

// X라는 정수가 존재하는 찾는 이분 탐색 함수
void binarySearch(int X) {
	int start = 0;
	int end = N - 1;
	int mid;

	while (start <= end) {
		mid = (start + end) / 2;

		if (arr[mid] == X) {
			cout << 1 << "\n";
			return;
		}
		else if (arr[mid] < X) {
			start = mid + 1;
		}
		else if (arr[mid] > X) {
			end = mid - 1;
		}
	}
	cout << 0 << "\n";
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;

	// N개의 정수를 입력받아 arr배열에 저장
	for (int i = 0; i < N; i++)
		cin >> arr[i];

	// 이분 탐색 알고리즘을 사용하기 위해 오름차순으로 정렬
	sort(arr, arr + N);

	cin >> M;
	int X;
	for (int i = 0; i < M; i++) {	
		cin >> X;
		binarySearch(X);
	}
	return 0;
}