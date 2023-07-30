#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int n,cnt,ans;
int arr[26][26];
bool visited[26][26];
int dx[4] = { 0,1,0,-1 }, dy[4] = { 1,0,-1,0 };
vector<int> vec;
string str;

bool inRange(int x, int y) {
	return x >= 1 && x <= n && y >= 1 && y <= n;
}

void dfs(int x, int y) {
	cnt++;
	visited[x][y] = 1;
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (!visited[nx][ny] && inRange(nx, ny) && arr[nx][ny] == 1) {
			dfs(nx, ny);
		}
	}
}

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> str;
		for (int j = 1; j <= n; j++) {
			arr[i][j] = stoi(str.substr(j - 1, 1));
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (!visited[i][j] && arr[i][j] == 1) {
				dfs(i, j);
				vec.push_back(cnt);
				ans++;
				cnt = 0;
			}
		}
	}
	sort(vec.begin(), vec.end());
	cout << ans << '\n';
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << '\n';
	}
}