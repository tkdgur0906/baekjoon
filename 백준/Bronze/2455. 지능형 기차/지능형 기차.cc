#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int out, in, num = 0;
	vector<int> vec;
	for (int i = 0; i < 4; i++) {
		cin >> out >> in;
		num = num + in - out;
		vec.push_back(num);
	}
	sort(vec.begin(), vec.end());
	cout << vec.back();
}