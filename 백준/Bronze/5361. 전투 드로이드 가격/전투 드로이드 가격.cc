#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	cout << fixed << setprecision(2);
	double n, a, b, c, d, e;
	double cost[3];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b >> c >> d >> e;
		cost[i] = a * 350.34 + b * 230.90 + c * 190.55 +
			d * 125.30 + e * 180.90;
	}
	for (int i = 0; i < n; i++ ) {
		cout << "$" <<cost[i] << endl;
	}
}