#include <iostream>
#include <string>
using namespace std;

string str;

int main() {
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') cout << (char)(str[i] + 32);
		else cout << (char)(str[i] - 32);
	}
}