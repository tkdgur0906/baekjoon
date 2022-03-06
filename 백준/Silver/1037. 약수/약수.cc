#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int num, divisor, temp;
	vector<int> vec;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> divisor;
		vec.push_back(divisor);
	}
	sort(vec.begin(), vec.end());
	if (vec.front()== 2) {
		cout << vec.back() * 2;
	}
	else {
		cout << vec.front() * vec.back();
	}
}