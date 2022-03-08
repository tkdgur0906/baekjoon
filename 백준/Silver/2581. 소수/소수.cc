#include <iostream>
#include <tuple>
using namespace std;

tuple<int,int> prime(int m, int n) {
	int sum = 0, min = 0, bo = 1,ch = 1;
	for (int i = m; i < n + 1; i++) {
		if (i == 1) continue;
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {bo = 0; break;}
		}
		if (bo == 1) {
			sum += i;
			if (ch == 1) { min = i; ch = 0; }
		}
		bo = 1;
	}
	if (ch == 1) { sum = -1; return tuple<int, int>(sum, min); }
	return tuple<int, int>(sum, min);
}



int main() {
	int m, n;
	cin >> m >> n;
	tuple<int, int> ans = prime(m, n);
	if (get<0>(ans) == -1)cout << -1;
	else cout << get<0>(ans) << "\n" << get<1>(ans);
}