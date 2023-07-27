#include <iostream>
#include <vector>
using namespace std;

int n,m;

int main() {
    cin >> n >> m;
    vector<int> vec(n + 1);
    while (m--) {
        int a, b, c;
        cin >> a >> b >> c;
        for (int i = a; i <= b; i++) {
            vec[i] = c;
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << vec[i] << ' ';
    }
}