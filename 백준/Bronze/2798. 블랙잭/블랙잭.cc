#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n, m, temp,max = 0,sum;
	vector<int> vec;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		vec.push_back(temp);
	}
	sort(vec.begin(),vec.end());
	for (int i = 0; i < n - 2; i++) {
		for (int j = i + 1; j < n - 1; j++) {
			temp = vec[i] + vec[j];
			for (int k = i + 2; k < n; k++) {
				sum = temp + vec[k];
				if (sum > max && sum <= m) {
					max = sum;
				}
			}
		}
	}
	cout << max;
}