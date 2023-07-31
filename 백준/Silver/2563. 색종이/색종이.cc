#include <iostream>
using namespace std;

int arr[101][101];
int n, x, y;

int main() {
	cin >> n;
	while (n--) {
		cin >> x >> y;
		for (int i = y; i < y + 10; i++) {
			for (int j = x; j < x + 10; j++) {
				arr[i][j] = 1;
			}
		}
	}
	int cnt = 0;
	for (int i = 1; i <= 100; i++) {
		for (int j = 1; j <= 100; j++) {
			if (arr[i][j] == 1) cnt++;
		}
	}
	cout << cnt;
}