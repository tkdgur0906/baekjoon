#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m, temp;
	vector<int> vec;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		vec.push_back(temp);
	}
	sort(vec.begin(), vec.end());
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> temp;
		if (binary_search(vec.begin(),vec.end(), temp)) {
			cout << 1 << "\n";
		}
		else {
			cout << 0 << "\n";
		}
	}
}