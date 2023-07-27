#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

int n,temp;
priority_queue<int> q;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n;
	while (n--) {
		cin >> temp;
		if (temp == 0) {
			if (q.empty()) cout << 0 << '\n';
			else {
				cout << q.top() << '\n';
				q.pop();
			}
		}
		else {
			q.push(temp);
		}
	}
}