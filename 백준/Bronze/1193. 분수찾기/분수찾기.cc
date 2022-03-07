#include <iostream>
using namespace std;

int main() {
	int temp, k = 0;
	cin >> temp;
	while (temp>0) {
		k++;
		temp -= k;
	}
	if (k % 2 == 0) {
		cout << temp + k << '/' << -temp + 1;
	}
	else {
		cout << -temp + 1<< '/' <<  temp + k;
	}
}