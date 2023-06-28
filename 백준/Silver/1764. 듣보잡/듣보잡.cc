/* 1764번 듣보잡 (C++) */
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main(void) {
	// N : 듣도 못한 사람의 수, M : 보도 못한 사람의 수
	int N, M;
	cin >> N >> M;

	// 듣도 못한 사람 이름
	string name = "";
	// 듣도 못한 사람 이름을 bool값 갖는 map
	map<string, bool> N_list;

	// 듣보잡 사람 수
	int cnt = 0;
	// 듣보잡 사람 이름
	vector<string> NMlist;

	for (int i = 0; i < N; i++) {
		cin >> name;
		// 듣도 못한 사람 이름을 true로 갖는 nmap
		N_list.insert(pair<string, bool>(name, true));
	}

	for (int i = 0; i < M; i++) {
		cin >> name;

		if (N_list[name] == true) {			
			NMlist.push_back(name);
			// 듣보잡 사람 수 카운트
			cnt++;	
		}
	}

	sort(NMlist.begin(), NMlist.end());

	// 듣보잡 수 출력
	cout << cnt << "\n";

	for (int i = 0; i < NMlist.size(); i++)
		cout << NMlist[i] << "\n";
		
	return 0;
}

