#include <iostream>
using namespace std;

int main() {
	int x, y, w, h, xPos, yPos;
	cin >> x >> y >> w >> h;
	if (w - x > x) {
		xPos =x;
	}
	else {
		xPos = w- x;
	}
	if (h - y > y) {
		yPos = y;
	}
	else {
		yPos = h - y;
	}
	if (xPos > yPos) {
		cout << yPos;
	}
	else {
		cout << xPos;
	}
}