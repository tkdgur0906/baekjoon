#include <iostream>
using namespace std;

int main() {
	int temp;
	cin >> temp;
	for (int i = 0; i < temp; i++) {
		for (int j = 0; j <i; j++) {
			cout << " ";
		}
		for (int j = 0; j < 2*(temp -i)-1; j++) {
			cout << "*";
		}
		cout << endl;
	}
	for (int i = 1; i < temp; i++) {
		for (int j = 0; j < temp-i-1; j++) {
			cout << " ";
		}
		for (int j = 0; j < 2*i + 1; j++) {
			cout << "*";
		}
		cout << endl;
	}
}