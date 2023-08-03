#include <iostream>
#include <string>
using namespace std;

int n, m;
string str;


int main() {
	cin >> n >> m >> str;
	string p = "";
	for (int i = 0; i < n; i++) {
		p += "IO";
	}
	p += "I";

	int ans = 0;
	for (int i = 0; i < str.size()- 2 * n + 1; i++) {
		if (str[i] == 'I') {
			if (str.substr(i, 2 * n + 1) == p) ans++;
		}
	}
	cout << ans;
	
}