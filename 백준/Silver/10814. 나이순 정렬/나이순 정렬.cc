/* 10814번 나이순 정렬 (C++) */
#include <iostream>
#include <algorithm>

using namespace std;

struct member {
	int age, idx;
	string name;
};

// 비교함수
bool compare(const member& m1, const member& m2) {
	if (m1.age != m2.age) return m1.age < m2.age;
	return m1.idx < m2.idx;
}

int main(void) {
	// 온라인 저지 회원의 수
	int N;
	cin >> N;

	member list[100000];

	for (int i = 0; i < N; i++) {
		cin >> list[i].age >> list[i].name;
		list[i].idx = i;
	}

	// 정렬
	sort(list, list + N, compare);

	// 나이와 이름을 공백으로 구분해 출력
	for (int i = 0; i < N; i++) {
		cout << list[i].age << " " << list[i].name << "\n";
	}

	return 0;
}

