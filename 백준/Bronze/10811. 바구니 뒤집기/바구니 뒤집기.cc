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
        vector<int> copy;
        cin >> a >> b;
        for (int i = b; i >= a; i--) {
            copy.push_back(vec[i]);
        }
        for (int i = a; i <= b; i++) {
            vec[i] = copy[i - a];
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << vec[i] << ' ';
    }
}