#include <iostream>
using namespace std;

int fac(int temp) {
	if (temp == 1 || temp == 0) return 1;
	return temp * fac(temp - 1);
}

int main() {
	int temp;
	cin >> temp;
	cout << fac(temp);
}