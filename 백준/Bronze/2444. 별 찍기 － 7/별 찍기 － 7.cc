#include <iostream>
using namespace std;

int main() {
	int temp;
	cin >> temp;
	
	for (int i = 0; i < temp; i++) {
		for (int j = 1; j < temp - i; j++) {
			cout << " ";
		}
		for (int k = 0; k < 2 * i + 1; k++) {
			cout << '*';
		}
		cout << endl;
	}
	for (int i = 0; i < temp - 1; i++) {
		for (int j = 0; j < i + 1; j++) {
			cout << " ";
		}
		for (int k = 0; k < 2*(temp-i)-3 ; k++) {
			cout << '*';
		}
		cout << endl;
	}
}