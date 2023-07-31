#include <iostream>
#include <string>
using namespace std;

string str;
string arr[15];


int main() {
	for (int i = 0; i < 5; i++) {
		cin >> str;
		for (int j = 0; j < str.size(); j++) {
			arr[j] += str[j];
		}
	}
	for (int i = 0; i < 15; i++) {
		cout << arr[i];
	}
}