#include <iostream>
#include <algorithm>
using namespace std;

int n;
char arr[101][101];
bool visited[101][101];
int dx[4] = { 0,1,0,-1 }, dy[4] = { 1,0,-1,0 };

bool inRange(int x, int y) {
	return x >= 1 && x <= n && y >= 1 && y <= n;
}

void dfs(int x, int y, bool isSick) {
	visited[x][y] = true;
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (!isSick && !visited[nx][ny] && inRange(nx, ny) && arr[nx][ny] == arr[x][y]) {
			dfs(nx, ny,isSick);
		}
		else if (isSick && !visited[nx][ny] && inRange(nx, ny)) {
			if ((arr[nx][ny] != 'B' && arr[x][y] != 'B') || (arr[nx][ny] == 'B' && arr[x][y] == 'B')) {
				dfs(nx, ny, isSick);
			}
		}
	}
}

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> arr[i][j];
		}
	}
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (!visited[i][j]) {
				dfs(i, j,false);
				ans++;
			}
		}
	}
	cout << ans << ' ';
	ans = 0;
	fill(&visited[0][0], &visited[100][101], false);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (!visited[i][j]) {
				dfs(i, j, true);
				ans++;
			}
		}
	}
	cout << ans;
}