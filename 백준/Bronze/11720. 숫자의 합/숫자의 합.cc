#include <iostream>
#include <string>
using namespace std;

int main() {
	int size = 0;
	int temp = 0;
	cin >> size;
	string num;
	cin >> num;
	for(int i = 0; i < size; i++) {
		temp += num[i] - 48;
	}
	cout << temp << endl; 
}