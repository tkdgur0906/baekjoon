#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, k, pos;
	vector<int> vec;

	cin >> n >> k;
	pos = k - 1;
	for (int i = 1; i <= n; i++) {
		vec.push_back(i);
	}
	cout << '<';
	while(!vec.empty()) {
		cout << vec[pos];
 		vec.erase(vec.begin() + pos);
		n--;
		if (n == 0) { break; }
		cout << ", ";
		pos = (pos + k - 1) % n;
	}
	cout << '>';
}