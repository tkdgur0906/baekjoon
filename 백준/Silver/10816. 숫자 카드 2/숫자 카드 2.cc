#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

vector<int> vec;

int find(int num) {
	int count = 0, start, end;
	
	start = lower_bound(vec.begin(), vec.end(), num) - vec.begin();
	end = upper_bound(vec.begin(), vec.end(), num) - vec.begin();
	return end - start;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m, temp, ans;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> temp;
		vec.push_back(temp);
	}

	sort(vec.begin(), vec.end());

	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> temp;
		cout << find(temp) << " ";
	}
}