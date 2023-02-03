#include <iostream>
#include <cmath>
using namespace std;

int n, r, c, ans;

int main() {
	cin >> n >> r >> c;

	while (n > 1) {
		int size = pow(2, n);
		int partSize = pow(size / 2, 2);
		if (r < size / 2 && c >= size / 2) {
			ans += partSize;
			c -= size / 2;
		}
		else if (r >= size / 2 && c < size / 2) {
			ans += 2 * partSize;
			r -= size / 2;
		}
		else if (r >= size / 2 && c >= size / 2) {
			ans += 3 * partSize;
			c -= size / 2;
			r -= size / 2;
		}
		n--;
	}
	cout << ans + 2 * r + c << '\n';
}