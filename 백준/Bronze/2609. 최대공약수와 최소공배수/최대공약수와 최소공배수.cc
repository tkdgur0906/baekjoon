#include <iostream>
using namespace std;

int main() {
	int x, y, min, max;
	cin >> x >> y;
	for (int i = 1; i <= x; i++) {
		if (x % i == 0 && y % i == 0) {
			min = i;
		}
	}
	max = (x / min) * (y / min) * min;
	cout << min << endl;
	cout << max;
}