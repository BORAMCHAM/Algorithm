/* 14425번 문자열 집합 (C++) */
#include <iostream>
#include <map>

using namespace std;

int main(void) {
	int N, M;
	cin >> N >> M;
	
	string S;
	int cnt = 0;
	map<string, bool> m;

	for (int i = 0; i < N; i++) {
		cin >> S;
		m.insert(pair<string, bool>(S, true));
	}

	for (int i = 0; i < M; i++) {
		cin >> S;
		if (m[S] == true)
			cnt++;
	}
	cout << cnt;
	return 0;
}

