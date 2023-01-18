#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<long long> vec;
long long k, n, temp, sum, ans;

int main() {
	cin >> k >> n;
	for (int i = 0; i < k; i++) {
		cin >> temp;
		vec.push_back(temp);
	}
	sort(vec.begin(), vec.end());
	
	long long start = 1, mid, end = vec[vec.size() - 1];
	while (start <= end) {
		sum = 0;
		mid = (start + end) / 2;
		for (int i = 0; i < vec.size(); i++) {
			sum += vec[i] / mid;
		}
		if (sum >= n) {
			start = mid + 1;
			ans = max(ans, mid);
		}
		else {
			end = mid - 1;
		}
	}
	cout << ans << '\n';
}