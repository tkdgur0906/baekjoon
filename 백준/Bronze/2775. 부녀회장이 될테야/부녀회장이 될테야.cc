#include <iostream>
using namespace std;

int main() {
	int arr[15][15];
	int T, k, n;
	for (int i = 1; i <= 14; i++) {
		arr[0][i] = i;
		arr[i][1] = 1;
	}
	for (int i = 1; i <= 14; i++) {
		for (int j = 2; j <= 14; j++) {
			arr[i][j] = arr[i][j - 1] + arr[i - 1][j];
		}
	}
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> k >> n;
		cout << arr[k][n] << endl;
	}
}