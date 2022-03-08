#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
	int temp = 0;
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		if (((int)str[i] + 1) / 3  == 22) temp += 3;
		else if (((int)str[i]+1) / 3 == 23) temp += 4;
		else if (((int)str[i] + 1) / 3  == 24) temp += 5;
		else if (((int)str[i] + 1) / 3  == 25) temp += 6;
		else if (((int)str[i] + 1) / 3  == 26) temp += 7;
		else if ((int)str[i]>=80 && (int)str[i] <=83) temp += 8;
		else if ((int)str[i] / 3  == 28) temp += 9;
		else  temp += 10;
	}
	cout << temp;
}