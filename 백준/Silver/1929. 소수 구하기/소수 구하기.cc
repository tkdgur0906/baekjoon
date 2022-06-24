#include <iostream>
using namespace std;

int main() {
	int m, n;
	bool bo = 1;
	cin >> m >> n;

	for (int i = m; i <= n; i++) {
		for (int j = 2; j * j <= i; j++) {
			if (i % j == 0) {
				bo = 0;
				break;
			}
		}
		if (bo == 1 && i != 1) cout << i << "\n";
		bo = 1;
	}
}