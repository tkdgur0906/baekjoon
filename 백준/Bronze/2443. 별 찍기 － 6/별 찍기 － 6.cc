#include <iostream>
using namespace std;

int main() {
	int temp;
	cin >> temp;
	
	for (int i = 0; i < temp; i++) {
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int k = 0; k < 2 * temp - 2*i-1; k++) {
			cout << "*";
		}
		cout << endl;
	}
}