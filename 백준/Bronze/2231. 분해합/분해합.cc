#include <iostream>
using namespace std;


int main() {
	int n,temp,min=1000000;
	cin >> n;
	for (int i = n - 1; i > 0; i--) {
		if (i >= 100000) { temp = i + i/100000 + i/10000%10 + i / 1000%10 + i/100%10 + i/10%10 + i % 10; }
		else if (i >= 10000) { temp = i + i / 10000 + i / 1000 % 10 + i / 100 % 10 + i / 10 % 10 + i % 10; }
		else if (i >= 1000) { temp = i + i / 1000 + i / 100 % 10 + i / 10 % 10 + i % 10; }
		else if (i >= 100) { temp = i + i / 100 + i / 10 % 10 + i % 10; }
		else if (i >= 10) { temp = i + i / 10 + i % 10;}
		else if (i > 0) { temp = 2*i; }
		if (temp == n) {
			min = i;
		}
	}
	if (min == 1000000) { cout << "0"; }
	else cout << min;
}