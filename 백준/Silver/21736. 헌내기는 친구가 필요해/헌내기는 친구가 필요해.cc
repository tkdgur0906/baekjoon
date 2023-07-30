#include <iostream>
using namespace std;

int n, m;
char arr[601][601];
bool visited[601][601];
int dx[4] = { 0,1,0,-1 }, dy[4] = { 1,0,-1,0 };
int ans;

bool inRange(int x, int y) {
	return x >= 1 && x <= n && y >= 1 && y <= m;
}

void dfs(int x, int y) {
	visited[x][y] = 1;
	if (arr[x][y] == 'P') {
		ans++;
	}
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (!visited[nx][ny] && inRange(nx, ny) && arr[nx][ny] != 'X') {
			dfs(nx, ny);
		}
	}
}

int main() {
	cin >> n >> m;

	int x, y;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 'I') {
				x = i;
				y = j;
			}
		}
	}
	dfs(x, y);
	if (ans == 0) cout << "TT";
	else cout << ans;
}