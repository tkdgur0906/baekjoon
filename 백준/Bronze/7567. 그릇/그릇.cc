#include <iostream>
#include <string>
using namespace std;

int main() {
	string dishes;
	int temp = 0, direction;
	cin >> dishes;
	if (dishes[0] == '(') {
		direction = 1;
		temp += 10;
	}
	else {
		direction = 0;
		temp += 10;
	}
	for (int i = 1; i < dishes.size(); i++) {
		if (dishes[i] == '(' && direction == 1) {
			temp += 5;
		}
		else if (dishes[i] =='(' && direction == 0) {
			direction = 1;
			temp += 10;
		}
		else if (dishes[i] == ')' && direction == 1) {
			temp += 10;
			direction = 0;
		}
		else {
			temp += 5;
		}
	}
	cout << temp;
}