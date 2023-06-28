/* 1620번 나는야 포켓몬 마스터 이다솜 (C++) */
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	// N : 도감에 수록되어 있는 포켓몬의 개수, M : 맞춰야 하는 문제의 개수
	int N, M;
	cin >> N >> M;

	// 입력받을 포켓몬 이름
	string pokemon;
	string name[100000];

	// 포켓몬 이름을 번호로 갖는 map
	map<string, int> poke;

	// 1번인 포켓몬부터 N번에 해당하는 포켓몬 입력
	for (int i = 1; i <= N; i++) {
		cin >> pokemon;
		poke.insert(pair<string, int>(pokemon, i));
		name[i] = pokemon;
	}

	// 문제 입력
	for (int i = 1; i <= M; i++) {
		cin >> pokemon;

		// 입력된 문제가 숫자라면
		if (isdigit(pokemon[0])) {
			// 포켓몬 이름 출력
			cout << name[stoi(pokemon)] << "\n";
		}
		// 입력된 문제가 문자라면
		else {
			// 포켓몬 해당 번호 출력
			cout << poke.find(pokemon)->second << "\n";
		}
	}
	return 0;
}

