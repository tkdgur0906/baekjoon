#include <iostream>
using namespace std;

int n, temp;
int dp[301],stair[301];

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> stair[i];
	}

	dp[1] = stair[1];
	dp[2] = dp[1] + stair[2];

	for (int i = 3; i <= n; i++) {
		dp[i] = max(dp[i - 2], dp[i-3] + stair[i - 1]) + stair[i];
	}
	cout << dp[n];
}