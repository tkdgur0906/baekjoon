#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int length;
	while (cin >> str) {
		if (str == "0") { break; }
		length = str.size();
		for (int i = 0; i < length; i++) {
			if (str[i] == str[length - 1 - i]) {
				if (i == length - 1) {
					cout << "yes\n";
				}
				continue;
			}
			else {
				cout << "no\n";
				break;
			}
		}
	}
}