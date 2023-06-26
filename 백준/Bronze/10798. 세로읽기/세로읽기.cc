/* 10798번 세로읽기 (C++) */
#include <iostream>

using namespace std;

int main(void) {
	string word[5];

	for (int i = 0; i < 5; i++) {
		cin >> word[i];
	}

	for (int j = 0; j < 15; j++) {
		for (int i = 0; i < 5; i++) {
			if (j < word[i].length()) {
				cout << word[i][j];
			}
		}
	}

	return 0;
}

