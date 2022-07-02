#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int arr[500000];
bool bo = true;

bool compare(pair<int,int> a , pair<int,int> b) { return a.first > b.first;}

void avg(int n) {
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum = sum + arr[i];
	}
	
	sum = sum / n;
	if (sum > -1 && sum < 0) { cout << 0 << "\n"; }
	else {
		cout.precision(0);
		cout << fixed << sum << "\n";
	}
}

void mid(int n) {
	if (n % 2 == 0) {
		cout << (arr[n / 2 - 1] + arr[n / 2]) / 2 << "\n";
	}
	else {
		cout << arr[n / 2] << "\n";
	}
}

void mode(int n) {
	vector<pair<int, int>> vec;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < vec.size(); j++) {
			if (arr[i] == vec[j].second) {
				vec[j].first++;
				bo = false;
				break;
			}
		}
		if (bo) {
			vec.push_back(pair<int, int>(1, arr[i]));
		}
		bo = true;
	}
	sort(vec.begin(), vec.end(),compare);
	if (vec[0].first == vec[1].first) {
		cout << vec[1].second << "\n";
	}
	else {
		cout << vec[0].second << "\n";
	}
}
void distance(int n) {
	cout << arr[n - 1] - arr[0] << "\n";
}

int main() {
	int n, m;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> m;
		arr[i] = m;
	}
	sort(arr, arr + n);
	
	avg(n);
	mid(n);
	mode(n);
	distance(n);
}