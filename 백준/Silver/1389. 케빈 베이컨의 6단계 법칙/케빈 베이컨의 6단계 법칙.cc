#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m, a, b, ans, minKevin = 9999999, sum;
int earth[101][101];

void floyd() {
	for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (earth[i][j] > earth[i][k] + earth[k][j]) {
					earth[i][j] = earth[i][k] + earth[k][j];
				}
			}
		}
	}
}

int main() {
	cin >> n >> m;
	fill(&earth[0][0], &earth[100][101], 9999999);
	for (int i = 1; i <= n; i++) {
		earth[i][i] = 0;
	}

	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		earth[a][b] = 1;
		earth[b][a] = 1;
	}

	floyd();
	
	for (int i = 1; i <= n; i++) {
		sum = 0;
		for (int j = 1; j <= n; j++) {
			sum += earth[i][j];
		}
		if (sum < minKevin) {
			ans = i;
			minKevin = sum;
		}
	}
	cout << ans << '\n';
}