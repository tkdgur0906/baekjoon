#include <iostream>
using namespace std;

int main() {
	int temp;
	cin >> temp;
	for (int i = 1; i <= temp; i++) {
		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		for (int k = 0; k < 2 *( temp - i); k++) {
			cout << " ";
		}
		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	for (int i = 1; i < temp; i++) {
		for (int j = 0; j < temp - i; j++) {
			cout << "*";
		}
		for (int j = 0; j < 2*i; j++) {
			cout << " ";
		}
		for (int j = 0; j < temp - i; j++) {
			cout << "*";
		}
		cout << endl;
	}
}