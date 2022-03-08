#include <iostream>
#include <string>
using namespace std;

void swap(string &a) {
	char ch;
	ch = a[0];
	a[0] = a[2];
	a[2] = ch;
}

int main() {
	string a, b;
	cin >> a >> b;
	swap(a);
	swap(b);
	if (a > b) cout << a;
	else cout << b;
}