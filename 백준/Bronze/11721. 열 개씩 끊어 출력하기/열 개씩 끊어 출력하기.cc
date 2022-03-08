#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;
	for (int i = 0;; i++) {
		if (str[i] == '\0' ) {
			break;
		}
		else if (i % 10 == 0 && i != 0) {
			cout << endl << str[i];
		}
		else {
			cout << str[i];
		}
	}
}