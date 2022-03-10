#include <iostream>
using namespace std;

void star(int i, int j, int n) {
	if (i/n % 3 == 1 && j/n % 3 == 1) {
		cout << " ";
	}
	else if (n / 3 == 0) {
		cout << "*";
	}
	else star(i, j, n / 3);
}

int main() {
	int temp;
	cin >> temp;
	for (int i = 0; i < temp; i++) {
		for (int j = 0; j < temp; j++) {
			star(i, j,temp);
		}
		cout << endl;
	}
}