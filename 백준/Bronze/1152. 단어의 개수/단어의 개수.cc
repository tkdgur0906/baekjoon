#include <iostream>
#include <string>
using namespace std;
	
int main() {
	int n = 0;
	int pos;
	string str;
	getline(cin, str);
	if (!str.empty()) {
		if (str.front() == ' ') {
			str.erase(str.begin());
		}
		if (!str.empty()) {
			if (str.back() == ' ') {
				str.erase(str.end() - 1);
			}
			pos = str.find(' ');
			while (pos != str.npos) {
				n++;
				pos = str.find(' ', pos + 1);
			}
			n++;
		}
	}
	cout << n;
}