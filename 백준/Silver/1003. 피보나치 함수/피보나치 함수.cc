#include <iostream>
using namespace std;

int t, n;
pair<int,int> dp[41];

int main() {
    cin >> t;
    dp[0].first = 1;
    dp[1].second = 1;

    for (int i = 2; i <= 40; i++) {
        dp[i].first = dp[i - 2].first + dp[i - 1].first;
        dp[i].second = dp[i - 2].second + dp[i - 1].second;
    }

    for(int i = 0;i<t;i++){
        cin >> n;
        cout << dp[n].first << ' ' << dp[n].second << '\n';
    }
}