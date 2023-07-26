#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

int n,temp;
priority_queue<pair<int, int>> q;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n;
	while (n--) {
		cin >> temp;
		if (temp != 0) {
			q.push({ -abs(temp), -temp });
		}
		else {
			if (!q.empty()) {
				cout << -q.top().second << '\n';
				q.pop();
			}
			else {
				cout << 0 << '\n';
			}
		}
	}
}