#include <iostream>
#include <string>
using namespace std;

int main() {
	int c;
	string a;
	cin >> c;
	for (int i = 0; i < c; i++) {
		cin >> a;
		cout << (int)a[0] + (int)a[2] -96 << endl;
	}
}