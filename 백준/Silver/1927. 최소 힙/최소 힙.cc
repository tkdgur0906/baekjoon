#include <iostream>
#include <queue>
using namespace std;

int n,x;
priority_queue<int> que;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n;
	while (n--) {
		cin >> x;
		if (x == 0) {
			if (que.empty()) {
				cout << 0 << '\n';
			}
			else {
				cout << -que.top() << '\n';
				que.pop();
			}
		}
		else {
			que.push(-x);
		}
	}
}