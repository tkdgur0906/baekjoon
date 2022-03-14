#include <iostream>
using namespace std;
int main(void) {
	int n,x,y,temp = 1;
	int weight[50];
	int height[50];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		weight[i] = x;
		height[i] = y;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n ; j++) {
			if (weight[i] < weight[j] && height[i] < height[j]) {
				temp++;
			}
		}
		cout << temp << " ";
		temp = 1;
	}
}