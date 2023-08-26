#include <iostream>
using namespace std;

int t, n;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		cout << n / 25 << ' ';
		n %= 25;
		cout << n / 10 << ' ';
		n %= 10;
		cout << n / 5 << ' ';
		n %= 5;
		cout << n / 1 << '\n';
	}
}