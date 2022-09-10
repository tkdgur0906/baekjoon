#include <iostream>
using namespace std;

int main() {
	int temp,n = 0;
	int arr[1001] = { 0, };
	cin >> temp;
	for (int i = 1; i <= temp; i++) {
		if (i < 100) arr[i] = 1;
		else {
			if ((i / 100 - i % 100 / 10) == (i % 100 / 10 - i % 10)) {
				arr[i] = 1;
			}
		}
	}
	for (int i = 1; i <= temp; i++) {
		if (arr[i] == 1) n++;
	}
	cout << n;
}