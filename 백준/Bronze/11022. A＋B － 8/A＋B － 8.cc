#include <iostream>
#include <string>
using namespace std;

int main() {
	int a,b,c;
	cin >> c;
	for (int i = 0; i < c; i++) {
		cin >> a >> b;
		cout << "Case #" << i + 1 << ": " << a << " + " << b << " = " << a + b << endl;
	}
}