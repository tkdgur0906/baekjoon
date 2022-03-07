#include <iostream>
using namespace std;

int main() {
	int n, temp, k = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		if (temp == 1) k--;
		for (int j = 2; j < temp; j++) {
			if (temp % j == 0) { k--; break; }
		}
		k++;
	}
	cout << k;
}