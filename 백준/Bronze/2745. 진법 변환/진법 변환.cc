#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string n;
int b;

int main() {
	cin >> n >> b;
	int ans = 0;
	int k = 0;
	for (int i = n.size() - 1; i >= 0; i--) {
		if(n[i] >= '0' && n[i] <= '9') ans += (n[i] - '0') * pow(b, k);
		else ans += (n[i] - 'A' + 10) * pow(b,k);
		k++;
	}
	cout << ans;
}