#include <iostream>
#include <climits>
using namespace std;

int n, m, b;
int arr[501][501];
                     
int main() {
	cin >> n >> m >> b;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> arr[i][j];
		}
	}

	int time = 0, copy_b = b, ans_time = INT_MAX, ans_height = 0;
	for (int i = 0; i <= 256; i++) {
		for (int j = 1; j <= n; j++) {
			for (int k = 1; k <= m; k++) {
				if (arr[j][k] < i) {
					time += i - arr[j][k];
					copy_b -= i - arr[j][k];
				}
				else if (arr[j][k] > i) {
					time += (arr[j][k] - i) * 2;
					copy_b += arr[j][k] - i;
				}
			}
		}
		if (copy_b >= 0 && time <= ans_time) {
			ans_time = time;
			ans_height = i;
		}
		time = 0;
		copy_b = b;
	}
	cout << ans_time << ' ' << ans_height;
}