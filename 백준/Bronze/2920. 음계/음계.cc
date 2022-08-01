#include <iostream>
#include <string>
using namespace std;

int main() {
	int temp, arr[8], k;
	string str = "";

	cin >> temp;
	if (temp == 1) {
		k = 2;
		for (int i = 1; i < 8; i++) {
			cin >> temp;
			if (temp == k) {
				k++;
				continue;
			}
			else {
				cout << "mixed";
				str = "mixed";
				break;
			}
		}
		if (str == "") { cout << "ascending"; }
	}
	else if (temp == 8) {
		k = 7;
		for (int i = 1; i < 8; i++) {
			cin >> temp;
			if (temp == k) {
				k--;
				continue;
			}
			else {
				cout << "mixed";
				str = "mixed";
				break;
			}
		}
		if (str == "") { cout << "descending"; }
	}
	else {
		cout << "mixed";
	}
}