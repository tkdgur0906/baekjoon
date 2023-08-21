#include <iostream>
#include <string>
#include <vector>
using namespace std;

int t, n;
string str;
vector<string> vec;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> str;
			vec.push_back(str);
		}
		if (n > 32) {
			cout << 0 << '\n';
		}
		else {
			int ans = 1e9;
			for (int i = 0; i < vec.size(); i++) {
				for (int j = i + 1; j < vec.size(); j++) {
					for (int k = j + 1; k < vec.size(); k++) {
						int dist = 0;
						for (int q = 0; q < 4; q++) {
							dist += (vec[i][q] != vec[j][q]) + (vec[j][q] != vec[k][q]) + (vec[k][q] != vec[i][q]);
						}
						ans = min(ans, dist);
					}
				}
			}
			cout << ans << '\n';
			vec.clear();
		}
	}
}