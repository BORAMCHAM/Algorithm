/* 10101번 삼각형 외우기 (C++) */
#include <iostream>

using namespace std;

int main(void) {
	int angle1, angle2, angle3;
	cin >> angle1 >> angle2 >> angle3;
	
	if (angle1 == angle2 && angle2 == angle3)
		cout << "Equilateral";
	else if ((angle1 + angle2 + angle3) == 180) {
		if (angle1 == angle2 || angle1 == angle3 || angle2 == angle3)
			cout << "Isosceles";
		else
			cout << "Scalene";
	}
	else
		cout << "Error";

	return 0;
}

