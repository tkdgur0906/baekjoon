#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, alphabet;
	long long hash = 0, M = 1234567891, k = 1;
	string str;

	cin >> n >> str;

	for (int i = 0; i < n; i++) {
		alphabet = str[i] - 96;
		hash = (hash + (alphabet * k)) % M;
		k = (k * 31) % M;
	}
	cout << hash;
}