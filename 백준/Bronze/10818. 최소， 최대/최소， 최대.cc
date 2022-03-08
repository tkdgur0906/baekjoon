#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int T, temp;
	vector<int> vec;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> temp;
		vec.push_back(temp);
	}
	sort(vec.begin(), vec.end());
	cout << vec[0] << " " << vec[T - 1];
}