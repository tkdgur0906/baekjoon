#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, x;
	vector<int> vec;
	vector<int> copyVec;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		vec.push_back(x);
		copyVec.push_back(x);
	}

	sort(copyVec.begin(), copyVec.end());

	copyVec.erase(unique(copyVec.begin(), copyVec.end()), copyVec.end());

	for (int i = 0; i < n; i++) {
		cout << lower_bound(copyVec.begin(), copyVec.end(), vec[i]) - copyVec.begin() << " ";
	}

}