#include<iostream>
#include <deque>
#include <cmath>
using namespace std;

deque<pair<int, int>> dq;
int n, temp;
pair<int, int> node;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> temp;
        dq.push_back({ i,temp });
    }
    while(!dq.empty()) {
        int idx = dq.front().second;
        cout << dq.front().first << ' ';
        dq.pop_front();
        
        if (dq.empty()) break;

        if (idx > 0) {
            idx--;
            while(idx--) {
                node = dq.front();
                dq.pop_front();
                dq.push_back(node);
            }
        }
        else if (idx < 0) {
            
            for (int i = 0; i < abs(idx); i++) {
                node = dq.back();
                dq.pop_back();
                dq.push_front(node);
            }
        }
    }
}