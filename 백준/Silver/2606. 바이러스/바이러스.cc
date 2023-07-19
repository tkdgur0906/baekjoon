#include <iostream>
#include <vector>
using namespace std;

int n,m,x,y,ans;
vector<int> vec[101];
bool visited[101];

void dfs(int n) {
	visited[n] = true;
	for (int i = 0; i < vec[n].size(); i++) {
		int next = vec[n][i];
		if (!visited[next]) {
			ans++;
			dfs(next);
		}
	}
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> x >> y;
		vec[x].push_back(y);
		vec[y].push_back(x);
	}

	dfs(1);
	cout << ans;
}