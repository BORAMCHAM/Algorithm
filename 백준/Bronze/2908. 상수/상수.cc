/* 2908번 상수(C++) */
#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	string A, B;
	cin >> A >> B;

	reverse(A.begin(), A.end());
	reverse(B.begin(), B.end());

	if (A > B)
		cout << A;
	else
		cout << B;

	return 0;
}

