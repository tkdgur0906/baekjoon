#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2) {
	if (p1.second == p2.second) { return p1.first < p2.first; }
	return p1.second < p2.second;
}

int main() {
	int n, x, y;
	vector<pair<int,int>> vec;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		vec.push_back(pair<int, int>(x, y));
	}
	sort(vec.begin(), vec.end(),compare);
	for (int i = 0; i < n; i++) {
		cout << vec[i].first << " " << vec[i].second << "\n";
	}
}