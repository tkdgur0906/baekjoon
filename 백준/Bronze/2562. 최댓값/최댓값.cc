#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int temp, a;
	int arr[9];
	for (int i = 0; i < 9; i++) {
		cin >> temp;
		arr[i] = temp;
	}
	a = arr[0];
	temp = 1;
	for (int i = 0; i < 9; i++) {
		if (arr[i] >= a) {
			a = max(a, arr[i]);
			temp = i;
		}
	}
	cout << a << endl;
	cout << temp + 1 << endl;
}