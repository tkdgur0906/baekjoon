#include <iostream>
using namespace std;

int main() {
	int temp;
	cin >> temp;
	for (int i = 0; i < temp; i++) {
		for (int j = 0; j < i + 1; j++) {
			cout << "*";
		}
		cout << endl;
	}
	for (int i = 0; i < temp - 1; i++) {
		for (int j = 0; j < temp - 1 - i; j++) {
			cout << "*";
		}
		cout << endl;
	}
}