#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int n, m, v, x, y;
bool check[1001];
vector<int> vec[1001];
queue<int> que;

void dfs(int start) {
	cout << start << ' ';
	check[start] = 1;
	for (int i = 0; i < vec[start].size(); i++) {
		if (check[vec[start][i]] == 0) {
			dfs(vec[start][i]);
		}
	}
}

void bfs(int start) {
	check[start] = 1;
	que.push(start);
	while (!que.empty()) {
		int now = que.front();
		cout << now << ' ';
		que.pop();
		for (int i = 0; i < vec[now].size(); i++) {
			if (check[vec[now][i]] == 0) {
				que.push(vec[now][i]);
				check[vec[now][i]] = 1;
			}
		}
	}
}

int main() {
	cin >> n >> m >> v;
	for (int i = 0; i < m; i++) {
		cin >> x >> y;
		vec[x].push_back(y);
		vec[y].push_back(x);
	}
	for (int i = 1; i <= n; i++) {
		sort(vec[i].begin(), vec[i].end());
	}
	dfs(v);
	cout << '\n';
	fill(check, check + 1001, 0);
	bfs(v);
}