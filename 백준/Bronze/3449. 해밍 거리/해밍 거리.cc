#include <iostream>
#include <string>
using namespace std;

int main() {
	int t, count = 0;
	string str1, str2;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> str1 >> str2;
		for (int j = 0; j < str1.size(); j++) {
			if (str1[j] != str2[j]) {
				count++;
			}
		}
		cout << "Hamming distance is " << count << ".\n";
		count = 0;
	}
}