#include <iostream>
#include <string>
using namespace std;

int main() {
	int n,temp = 0;
	string str;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> str;
		for (int j = 0; j < str.size(); j++) {
			if (str[j] == '(') temp++;
			else if (str[j] == ')') temp--;
			if (temp < 0) {
				cout << "NO\n"; break;
			}
		}
		if (temp == 0) cout << "YES\n";
		else if(temp >0) cout << "NO\n";
		temp = 0;
	}
}