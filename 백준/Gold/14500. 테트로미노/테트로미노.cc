#include <iostream>
#include <algorithm>
using namespace std;

int n, m, ans;
int arr[501][501];
bool visited[501][501];
int dx[4] = { 0,-1,0,1 }, dy[4] = { 1,0,-1,0 };

bool inRange(int x, int y) {
	return x >= 1 && x <= n && y >= 1 && y <= m;
}

void dfs(int x, int y, int depth, int sum) {
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (depth < 4 && inRange(nx, ny) && !visited[nx][ny]) {
			visited[nx][ny] = 1;
			dfs(nx, ny, depth + 1, sum + arr[x][y]);
			visited[nx][ny] = 0;
		}
	}
	if (x + 1 <= n && y - 1 >= 1 && y + 1 <= m) {//ㅜ
		ans = max(ans, arr[x][y] + arr[x][y - 1] + arr[x][y + 1] + arr[x + 1][y]);
	}
	if (x - 1 >= 1 && y - 1 >= 1 && y + 1 <= m) {//ㅗ
		ans = max(ans, arr[x][y] + arr[x][y - 1] + arr[x][y + 1] + arr[x - 1][y]);
	}
	if (x - 1 >= 1 && x + 1 <= n && y - 1 >= 1) {//ㅓ
		ans = max(ans, arr[x][y] + arr[x - 1][y] + arr[x + 1][y] + arr[x][y - 1]);
	}
	if (x - 1 >= 1 && x + 1 <= n && y + 1 <= m) {//ㅏ
		ans = max(ans, arr[x][y] + arr[x - 1][y] + arr[x + 1][y] + arr[x][y + 1]);
	}
	if (depth == 3) {
		ans = max(ans, sum + arr[x][y]);
		return;
	}
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			visited[i][j] = 1;
			dfs(i, j, 0, 0);
			visited[i][j] = 0;
		}
	}
	cout << ans;
	
}