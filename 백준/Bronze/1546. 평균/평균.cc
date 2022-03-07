#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	double temp, score,high = 0,sum = 0;
	cin >> temp;
	for (int i = 0; i < temp; i++) {
		cin >> score;
		sum += score;
		high = max(high, score);
	}
	cout << sum * 100 / high  / temp;
}