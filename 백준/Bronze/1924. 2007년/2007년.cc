#include <iostream>
#include <string>
using namespace std;

int main() {
	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	string date[7] = {"SUN","MON","TUE","WED","THU","FRI","SAT" };
	int x, y;
	int count = 0;
	cin >> x >> y;
	for (int i = 0; i < x -1; i++) {
		 y += month[i];
	}
	count = y % 7;
	cout << date[count] << endl;
	return 0;
}