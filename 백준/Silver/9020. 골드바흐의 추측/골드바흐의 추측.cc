#include <iostream>
using namespace std;

#define SIZE 10001
bool isPrime[SIZE];

int main() {
	int t, n, min = 0,max = 10000;
	cin >> t;

	for (int i = 0; i < SIZE; i++) {
		isPrime[i] = 1;
	}
	for (int i = 2; i < SIZE; i++) {
		if (isPrime[i] == 1) {
			for (int j = 2 * i; j < SIZE; j += i) {
				isPrime[j] = 0;
			}
		}
	}

	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int j = 2; j <= SIZE; j++) {
			if (isPrime[j] == 1 && isPrime[n - j] == 1 && j <= n - j) {
				if (n - (2 * j) < max - min) {
					min = j;
					max = n - j;
				}
			}
		}
		cout << min << " " << max << "\n";
		min = 0;
		max = 10000;
	}


}