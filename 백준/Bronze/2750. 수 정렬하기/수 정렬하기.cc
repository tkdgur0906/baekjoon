#include<iostream>
using namespace std;

int arr[1001];

int main() {
	int number,n, i, j, temp, index, min;
	cin >> number;
	for (i = 0; i < number; i++) {
		cin >> n;
		arr[i] = n;
	}
	for (i = 0; i < number; i++) {
		min = 1001;
		for (j = i; j < number; j++) {
			if (arr[j] < min) {
				min = arr[j];
				index = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
	}
	for (i = 0; i < number; i++) {
		cout << arr[i] << endl;
	}
}