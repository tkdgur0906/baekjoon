#include <iostream>
using namespace std;
int main() {
	int n, k,temp=1;
	cin >> n >> k;
	for (int i = 0; i < k; i++) {
		temp *= n - i;
	}
	for (int i = 0; i < k; i++) {
		temp /= k - i;
	}
	cout << temp;
}