/* 2941번 크로아티아 알파벳 (C++) */
#include <iostream>

using namespace std;

int main(void) {
	// 크로아티아 알파벳 배열
	string croatia[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
	
	// 단어 str 입력
	string str;
	cin >> str;

	for (int i = 0; i < 8; i++) {
		while (true) {
			// 값을 찾지 못했으면 break
			if (str.find(croatia[i]) == string::npos)
				break;
			// 크로아티아 알파벳을 @ 변경
			str.replace(str.find(croatia[i]), croatia[i].length(), "@");
		}
	}

	cout << str.length();
	return 0;
}

