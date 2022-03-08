#include <iostream>
#include <vector>
using namespace std;

int main() {
	string a, b, c;
	vector<int> vec;
	int sum;
	int arr1[10001] = { 0, }, arr2[10001] = { 0, };
	cin >> a >> b;
	if (a.size() < b.size()) {
		c = a;
		a = b;
		b = c;
	}

	for (int i = 0; i < a.size(); i++) {
		arr1[i + 1] = a[i] - '0';
	}
	for (int i = 0; i < b.size(); i++) {
		arr2[i + (a.size() - b.size()) + 1] = b[i] - '0';
	}
	for (int i = a.size(); i > 0; i--) {
		sum = arr1[i] + arr2[i];
		if (sum >= 10) {
			arr1[i - 1]++;
			sum -= 10;
		}
		vec.push_back(sum);
	}
	if (arr1[0] != 0) cout << 1;
	for (int i = vec.size() - 1; i >= 0 ; i--) {
		cout << vec[i];
	}
}
