#include<iostream>
#include <vector>
using namespace std;

int n, x, y;
vector<int> vec[100001];
bool visited[100001];
int parent_info[100001];

void dfs(int node, int parent) {
    visited[node] = true;
    parent_info[node] = parent;
    for (int i = 0; i < (int)vec[node].size(); i++) {
        if (!visited[vec[node][i]]) {
            dfs(vec[node][i], node);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n;
    for (int i = 0; i < n - 1; i++) {
        cin >> x >> y;
        vec[x].push_back(y);
        vec[y].push_back(x);
    }
   
    dfs(1, 0);
    for (int i = 2; i <= n; i++) {
        cout << parent_info[i] << '\n';
    }
}