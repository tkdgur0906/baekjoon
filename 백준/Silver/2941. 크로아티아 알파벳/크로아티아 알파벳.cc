#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;
	int temp = str.size();
	for (int i = 1; i < str.size(); i++) {
		if (str[i] == '=') {
			if (str[i - 1] == 'c') { temp--; }
			else if (str[i - 1] == 'z' && i != 1 && str[i - 2] == 'd') { temp = temp - 2; }
			else if (str[i - 1] == 'z' || str[i - 1] == 's') { temp--; }
		}
		else if (str[i] == '-') {
			if (str[i - 1] == 'c' || str[i-1] == 'd') { temp--; }
		}
		else if (str[i] == 'j') {
			if (str[i - 1] == 'l' || str[i - 1] == 'n') { temp--; }
		}
	}
	cout << temp;
}