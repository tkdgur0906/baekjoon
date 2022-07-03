#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, x, y;
	vector<pair<int,int>> vec;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		vec.push_back(pair<int, int>(x, y));
	}
	sort(vec.begin(), vec.end());
	for (int i = 0; i < n; i++) {
		cout << vec[i].first << " " << vec[i].second << "\n";
	}
}