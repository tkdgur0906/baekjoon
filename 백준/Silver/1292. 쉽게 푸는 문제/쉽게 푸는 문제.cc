#include <iostream>
using namespace std;

int main() {
	int *ptr = new int[1000];
	int a , b, sum = 0 , num = 1, temp = 1;
	for (int i = 0; i < 1000; i++) {
		if (num == temp) {
			ptr[i] = num;
			num++;
			temp = 1;
		}
		else {
			temp++;
			ptr[i] = num;
		}
	}
	cin >> a >> b;
	for (a; a < b + 1; a++) {
		sum += ptr[a - 1];
	}
	cout << sum;
	delete[] ptr;
}