#include <iostream>
using namespace std;

#define MAX 246913

int main() {
	int arr[MAX], num = 0, n;

	for (int i = 0; i < MAX; i++) {
		arr[i] = 1;
	}
	
	for (int i = 2; i < MAX; i++) {
		if (arr[i] == 1) {
			for (int j = 2 * i; j < MAX; j += i) {
				arr[j] = 0;
			}
		}
	}
	
	while (cin >> n) {
		if (n == 0) break;
		for (int i = n + 1; i <= 2 * n; i++) {
			if (arr[i] == 1) num++;
		}
		cout << num << "\n";
		num = 0;
	}
}