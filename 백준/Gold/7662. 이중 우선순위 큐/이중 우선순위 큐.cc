#include <iostream>
#include <set>
using namespace std;

int t, n, temp;
char ch;
multiset<int> s;

void solve() {
	cin >> n;
	while (n--) {
		cin >> ch;
		if (ch == 'I') {
			cin >> temp;
			s.insert(temp);
		}
		else {
			cin >> temp;
			if (s.empty()) {
			}
			else if (temp == 1) {
				auto it = s.end();
				it--;
				s.erase(it);
			}
			else {
				s.erase(s.begin());
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> t;
	while (t--) {
		solve();
		if (s.empty()) cout << "EMPTY\n";
		else cout << *s.rbegin() << ' ' << *s.begin() << '\n';
		s.clear();
	}
}