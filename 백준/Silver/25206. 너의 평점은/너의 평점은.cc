#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

string subject, grade;
double rate, ans;
int cnt;
unordered_map<string, double> m;

int main() {
	m["A+"] = 4.5;
	m["A0"] = 4.0;
	m["B+"] = 3.5;
	m["B0"] = 3.0;
	m["C+"] = 2.5;
	m["C0"] = 2.0;
	m["D+"] = 1.5;
	m["D0"] = 1.0;
	m["F"] = 0.0;
	for (int i = 0; i < 20; i++) {
		cin >> subject >> rate >> grade;
		if (grade == "P") {
			continue;
		}
		ans += rate * m[grade];
		cnt += rate;
	}
	cout.precision(6);
	cout << fixed;
	cout << ans / cnt;
}