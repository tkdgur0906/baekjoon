#include <iostream>
using namespace std;

int arr[201];

int main() {
	int N, temp,v = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> temp;
		arr[temp + 100]++;
	}
	cin >> v;
	cout << arr[v + 100];
}
