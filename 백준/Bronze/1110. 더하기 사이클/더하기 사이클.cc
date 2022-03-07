#include <iostream>
using namespace std;

int main() {
	int k=0,temp,num,a = -1;
	cin >> temp;
	a = temp;
	while ((temp != a) || (k == 0)) {
		if (temp < 10) num = temp;
		else num = temp / 10 + temp % 10;
		temp = temp % 10 * 10 + num%10;
		k++;
	}
	cout << k;
 }