/* 2485번 가로수 (C++) */
#include <iostream>
#include <algorithm>

using namespace std;

// 심어진 가로수들의 위치
int tree[100000];
// 심어진 가로수들 사이의 거리
int tree_distance[100000];

// 최대공약수 구하는 함수
int GCD(int a, int b) {
	int c;

	while (b != 0) {
		c = a % b;
		a = b;
		b = c;
	}

	return a;
}

int main(void) {
	// 이미 심어져 있는 가로수의 수
	int N;
	cin >> N;

	// gcd : 가로수들 사이 거리의 최대공약수, cnt : 추가로 심을 가로수 개수
	int gcd = 0, cnt = 0;

	// 기존에 심어져 있는 가로수들의 위치
	for (int i = 0; i < N; i++) {
		cin >> tree[i];
	}

	sort(tree, tree + N);

	// 심어진 가로수들의 간격
	for (int i = 0; i < N - 1; i++) {
		tree_distance[i] = tree[i + 1] - tree[i];
	}

	// 심어진 가로수들 사이 거리의 최대공약수
	gcd = tree_distance[0];
	for (int i = 1; i < N - 1; i++) {
		gcd = GCD(gcd, tree_distance[i]);
	}

	// 추가로 심을 가로수 개수
	for (int i = 0; i < N - 1; i++) {
		cnt += (tree_distance[i] / gcd) - 1;
	}

	cout << cnt;
	return 0;
}

