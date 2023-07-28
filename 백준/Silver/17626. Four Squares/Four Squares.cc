#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int n,dp[50001];
vector<int> squre;

int main() {
    cin >> n;
    for (int i = 1; i <= 50000; i++) {
        if (i * i > n) break;
        squre.push_back(i * i);
    }
    fill(dp, dp + n + 1, INT_MAX);
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;

    for (int i = 4; i <= n; i++) {
        for (int j = 0; j < squre.size(); j++) {
            if (squre[j] == n) {
                cout << 1;
                return 0;
            }
            if(i - squre[j] >= 0) dp[i] = min(dp[i], dp[i - squre[j]] + 1);
        }
    }

    cout << dp[n];
}