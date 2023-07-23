#include <iostream>
#include <queue>
using namespace std;

int n, k;
queue<pair<int,int>> que;
bool visited[100001];

void solve() {
	while (!que.empty()) {
		int now = que.front().first;
		int cnt = que.front().second;
		visited[now] = true;
		if (now == k) {
			cout << cnt;
			break;
		}
		que.pop();
		if(now - 1 >= 0 && !visited[now - 1]) que.push({ now - 1, cnt + 1 });
		if(now + 1 <= 100000 && !visited[now + 1]) que.push({ now + 1, cnt + 1 });
		if(now * 2 <= 100000 && !visited[now * 2]) que.push({ now * 2, cnt + 1 });
	}
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	cin >> n >> k;
	que.push({ n,0 });
	visited[n] = true;
	solve();
}