/* 2447번 별 찍기 - 10 (C++) */
#include <iostream>

using namespace std;

int star(int i, int j, int N) {
	if (N == 1) cout << "*";
	else if ((i / (N / 3)) % 3 == 1 && (j / (N / 3)) % 3 == 1) cout << " ";
	else star(i, j, N / 3);

	return 0;
}

int main(void) {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			star(i, j, N);
		}
		cout << "\n";
	}

	return 0;
}

