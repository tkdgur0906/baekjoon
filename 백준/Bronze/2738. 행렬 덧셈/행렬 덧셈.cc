#include <iostream>
#include <vector>
using namespace std;

vector<int> vec;
int n, m,temp;

int main() {
	cin >> n >> m;
	for (int i = 0; i <  n * m; i++) {
		cin >> temp;
		vec.push_back(temp);
	}
	for (int i = 0; i < n * m; i++) {
		cin >> temp;
		vec[i] += temp;
	}
	for (int i = 0; i < n * m; i++) {
		cout << vec[i] << ' ';
		if ( (i + 1) % m == 0) cout << '\n';
	}	
}