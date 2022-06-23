#include <iostream>
using namespace std;

int main() {
	int n, k = 2;
	cin >> n;
	while (n != 1) {
		if (n % k == 0) {
			n = n / k;
			cout << k << "\n";
			continue;
		}
		k++;
	}
	
}