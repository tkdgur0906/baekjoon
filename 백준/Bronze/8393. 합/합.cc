#include <iostream>
using namespace std;

int main() {
	int x, temp = 0;
	cin >> x;
	for (int i = 1; i <= x; i++) {
		temp += i;
	}
	cout << temp << endl;
}