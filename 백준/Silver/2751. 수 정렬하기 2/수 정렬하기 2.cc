#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int temp, n;
	vector<int> vec;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		vec.push_back(temp);
	}
	sort(vec.begin(), vec.end());
	for (int i = 0; i < n; i++) {
		cout << vec[i] << '\n';
	}
}