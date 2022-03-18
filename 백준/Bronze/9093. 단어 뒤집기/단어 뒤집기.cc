#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int n;
	string str,store;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		getline(cin, str);
		for (int j = 0; j < str.size(); j++) {
			if (str[j] != ' ' ) {
				store += str[j];
				if (j == str.size() - 1) {
					reverse(store.begin(), store.end());
					cout << store << ' ';
					store = "";
				}
			}
			else {
				reverse(store.begin(), store.end());
				cout << store << ' ';
				store = "";
			}
		}
		cout << store << endl;
	}
}