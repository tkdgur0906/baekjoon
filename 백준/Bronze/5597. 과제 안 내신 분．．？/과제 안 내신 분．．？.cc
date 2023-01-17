#include <iostream>
using namespace std;

int arr[31], temp;

int main() {
	for (int i = 0; i < 28; i++) {
		cin >> temp;
		arr[temp] = 1;
	}
	int k = 0;
	for (int i = 1; i <= 30; i++) {
		if (k == 2) { return 0;}
		if (arr[i] == 0) {
			cout << i << '\n';
		}
	}
}