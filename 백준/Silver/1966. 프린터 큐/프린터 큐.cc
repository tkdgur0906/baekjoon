#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <queue>
using namespace std;

int t, m, n, temp, ans = 1;
vector<pair<int, int>> vec;
queue<pair<int, int>>  que;

int main() {
	cin >> t;
	for (int q = 0; q < t; q++) {
		cin >> m >> n;
		for (int i = 0; i < m; i++) {
			cin >> temp;
			vec.push_back({ temp,i });
			que.push({ temp,i });
		}
		sort(vec.begin(), vec.end(), greater<>());
		
		while (true) {
			if (que.front().first == vec[0].first) {
				if (que.front().second == n) {
					cout << ans << '\n';
					ans = 1;
					break;
				}
				vec.erase(vec.begin());
				que.pop();
				ans++;
			}
			else {
				que.push(que.front());
				que.pop();
			}
		}
		while (!que.empty()) {
			que.pop();
		}
		vec.clear();
	}
}