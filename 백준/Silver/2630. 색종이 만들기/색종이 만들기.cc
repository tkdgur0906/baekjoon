#include <iostream>

using namespace std;

int n, arr[129][129];
int white, blue;

void sol(int x, int y, int k) {
	bool bo = false;
	for (int i = x; i < x + k; i++) {
		for (int j = y; j < y + k; j++) {
			if (arr[i][j] != arr[x][y]) {
				bo = true;
				break;
			}
		}
		if (bo) break;
	}
	if (bo) {
		sol(x, y, k / 2);
		sol(x + k / 2, y, k / 2);
		sol(x, y + k / 2, k / 2);
		sol(x + k / 2, y + k / 2, k / 2);
	}
	else {
		if (arr[x][y] == 1) blue++;
		else white++;
	}
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> arr[i][j];
		}
	}
	sol(1, 1, n);
	cout << white << '\n' << blue;
}