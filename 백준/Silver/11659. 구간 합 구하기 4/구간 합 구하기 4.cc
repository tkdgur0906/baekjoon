#include <iostream>
using namespace std;

int n, m, x, y;
int arr[100001], prefix[100001];

int main() {
	ios::sync_with_stdio(0);cin.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		prefix[i] = prefix[i - 1] + arr[i];
	}

	while (m--) {
		cin >> x >> y;
		cout << prefix[y] - prefix[x - 1] << '\n';
	}
}