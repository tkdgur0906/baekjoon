#include <iostream>
using namespace std;

int main() {
	int temp,i=2,k=6;
	cin >> temp;
	if (temp == 1) { cout << 1; return 0; }
	while (true) {
		if ((temp - 2) / k == 0) {
			cout << i;
			break;
		}
		k += 6 * i;
		i++;
	}
}