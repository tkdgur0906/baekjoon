#include <iostream>
#include <queue>
#include <string>
#include <tuple>
using namespace std;

int n,m,temp, arr[101][101];
queue<tuple<int,int,int>> q;
string str;
int dx[4] = { 1,0,-1,0 }, dy[4] = { 0,1,0,-1 };
bool visited[101][101];

bool inRange(int x, int y) {
	return x >= 1 && x <= n && y >= 1 && y <= m;
}


void bfs() {
	q.push(make_tuple(1, 1,1));
	visited[1][1] = true;
	while (!q.empty()) {
		int x, y, cnt;
		tie(x, y, cnt) = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (!visited[nx][ny] && inRange(nx, ny) && arr[nx][ny] == 1) {
				q.push(make_tuple(nx,ny, cnt + 1 ));
				visited[nx][ny] = true;
				arr[nx][ny] = cnt + 1;
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> str;
		for (int j = 1; j <= m; j++) {
			arr[i][j] = str[j - 1] - '0';
		}
	}

	bfs();
	cout << arr[n][m];
	
	
}