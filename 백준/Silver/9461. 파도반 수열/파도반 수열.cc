#include <iostream>
using namespace std;

long long dp[101], n,t;

long long pado(long long n) {
	if (n <= 3) return 1;
	for (int i = 4; i <= n; i++) {
		dp[i] = dp[i - 2] + dp[i - 3];
	}
	return dp[n];
}

int main() {
	cin >> t;
	dp[1] = dp[2] = dp[3] = 1;
	while (t--) {
		cin >> n;
		cout << pado(n) << '\n';
	}
}