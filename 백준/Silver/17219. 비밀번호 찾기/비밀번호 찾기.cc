#include <iostream>
#include <string>
#include <map>
using namespace std;

int n, m;
string site, password;
map<string, string> text;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> site >> password;
		text.insert({ site, password });
	}
	for (int i = 0; i < m; i++) {
		cin >> site;
		cout << text.find(site)->second << '\n';
	}
}