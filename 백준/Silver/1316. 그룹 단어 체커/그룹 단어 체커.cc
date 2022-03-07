#include <iostream>
#include <string>
using namespace std;

int main() {
	int n=0,temp = 0;
	char ch;
	string str;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int bo[26] = { 0, };
		cin >> str;
		for (int j = 0; j < str.size(); j++) {
			if (bo[str[j] - 97] == 1 && ch != str[j]) break;
			
			if (bo[str[j] - 97] == 0) {
				bo[str[j] - 97] = 1;
				ch = str[j];
			}
			if (j == (str.size() - 1)) { temp++; }
		}
	}
	cout << temp;


}