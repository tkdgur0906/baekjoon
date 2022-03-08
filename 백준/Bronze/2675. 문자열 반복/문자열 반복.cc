#include <iostream>
#include <string>
using namespace std;

int main() {
	int t, n;
	string str,strr;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n >> str;
		for (int j = 0; j < n * str.size(); j++) {
			cout << str[j/n];
		}
		cout << endl;
	}
}