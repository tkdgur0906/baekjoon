#include <iostream>
using namespace std;

int arr[10];

int main() {
	int a, b, c,ex = 0;
	cin >> a >> b >> c;
	int temp = a * b * c;
	while (temp > 0) {
		ex = temp % 10;
		arr[ex]++;
		temp = temp / 10;
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << "\n";
	}
}
