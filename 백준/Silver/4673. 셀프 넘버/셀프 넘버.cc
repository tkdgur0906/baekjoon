#include <iostream>
using namespace std;

int func(int temp,int arr[]) {
	if (temp > 10000) return 0;
	else if (temp < 10) temp = temp * 2;
	else if (temp >= 10 && temp < 100) temp = temp + temp % 10 + temp / 10;
	else if (temp >= 100 && temp < 1000) temp = temp + temp / 100 + (temp % 100) / 10 + temp % 10;
	else if (temp >= 1000 && temp < 10000) temp = temp + temp / 1000 + temp % 1000 / 100 + temp % 100 / 10 + temp % 10;
	else if (temp == 10000) temp = 10001;
	arr[temp] = 1;
	return func(temp, arr);
}

int main() {
	int temp;
	int arr[20000] = { 0,};
	for (int i = 1; i <= 10000; i++) {
		func(i, arr);
	}
	for (int i = 1; i <= 10000; i++) {
		if (arr[i] == 0) {
			cout << i << "\n";
		}
	}
}