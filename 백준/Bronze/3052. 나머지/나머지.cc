#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int temp,k = 1;
	int arr[10];
	for (int i = 0; i < 10; i++) {
		cin >> temp;
		arr[i] = temp % 42;
	}
	sort(arr, arr + 10);
	for (int i = 0; i < 9; i++) {
		if (arr[i] != arr[i + 1]) {
			k++;
		}
	}
	cout << k;
}