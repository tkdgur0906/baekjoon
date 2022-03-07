#include <iostream>
using namespace std;

int main() {
	int n, tNum, cNum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tNum;
		if (n - i == 1) {
			cNum += tNum;
		}
		else {
			cNum += tNum - 1;
		}
	}
	cout << cNum;
}