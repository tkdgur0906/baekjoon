#include <iostream>
using namespace std;

int check(int n) {
	int temp = 0;
	while (n > 0) {
		if (temp == 3) break;
		if (n % 10 == 6) {
			temp++;
		}
		else temp = 0;
		n /= 10;
	}
	if (temp == 3) return 1;
	else return 0;
}

int main() {
	int n,temp=665;
	cin >> n;
	for (int i = 0; i < n; i++) {
		while (1) {
			temp++;
			if (check(temp) == 1) {
				break;
			}
		}
	}
	cout << temp;
}