#include <iostream>
using namespace std;

int hotel(int h, int w, int n) {
	int Y = n % h;
	if (n % h == 0) Y = h;
	int X = n / h + 1;
	if (n % h == 0) X = n / h;
	return Y * 100 + X;
}

int main() {
	int T, h, w, n;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> h >> w >> n;
		cout << hotel(h, w, n) << endl;
	}
}