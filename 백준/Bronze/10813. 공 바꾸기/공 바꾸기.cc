#include <iostream>
#include <vector>
using namespace std;

int n,m;

int main() {
    cin >> n >> m;
    vector<int> vec(n + 1);
    for (int i = 1; i <= n; i++) {
        vec[i] = i;
    }
    while (m--) {
        int a, b;
        cin >> a >> b;
        int temp = vec[a];
        vec[a] = vec[b];
        vec[b] = temp;
    }
    for (int i = 1; i <= n; i++) {
        cout << vec[i] << ' ';
    }
}