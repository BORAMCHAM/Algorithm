/* 1874번 스택 수열 (C++) */
#include <iostream>
#include <stack>

using namespace std;

int main(void) {
	int n, num, x = 1;
	cin >> n;

	stack<int> s;
	string result = "";

	for (int i = 0; i < n; i++) {
		cin >> num;

		if (num >= x) {
			while (num >= x) {
				s.push(x++);
				result += "+\n";
			}
			s.pop();
			result += "-\n";
		}
		else if (!s.empty() && s.top() == num) {
			s.pop();
			result += "-\n";
		}
		else if (!s.empty() && s.top() > num) {
			cout << "NO";
			return 0;
		}
		
		
	}

	cout << result;
	return 0;
}

