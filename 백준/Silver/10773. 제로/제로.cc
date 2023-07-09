/* 10773번 제로 (C++) */
#include <iostream>
#include <stack>

using namespace std;

int main(void) {
	int K, number, sum = 0;
	cin >> K;

	stack<int> num;

	for (int i = 0; i < K; i++) {
		cin >> number;
		if (number == 0) num.pop();
		else num.push(number);
	}

	while (!num.empty()) {
		sum += num.top();
		num.pop();
	}

	cout << sum;
	return 0;
}

