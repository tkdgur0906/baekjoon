#include <iostream>
#include <vector>
using namespace std;

int n, b;
vector<int> ans;
char alphabet[26] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n >> b;
	while (n >= b) {
		ans.push_back(n % b);
		n = n/b;
	}
	if (n >= 10) cout << alphabet[n - 10];
	else cout << n;
	for (int i = ans.size() - 1; i >= 0; i--) {
		if (ans[i] >= 10) cout << alphabet[ans[i] - 10];
		else cout << ans[i];
	}
}