#include <iostream>
#include <string>
using namespace std;

int main() {
	int m, n, B_start=0, W_start=0,sum = 0,min=1000000;
	string str;
	int B_arr[50][50];
	int W_arr[50][50];
	int B[50][50];
	int W[50][50];
	cin >> m >> n;
	for (int i = 0; i < m; i++) {
		cin >> str;
		for (int k = 0; k < n - 7; k++) {
			for (int j = 0; j < 8; j++) {
				if (j % 2 == 0) {
					if (str[j+k] == 'B') W_start++;
					else B_start++;
				}
				else {
					if (str[j+k] == 'B') B_start++;
					else W_start++;
				}
			}
			B_arr[i][k] = B_start;
			W_arr[i][k] = W_start;
			B_start = 0; W_start = 0;
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (i % 2 == 0) {
				W[i][j] = W_arr[i][j];
				B[i][j] = B_arr[i][j];
			}
			else {
				W[i][j] = B_arr[i][j];
				B[i][j] = W_arr[i][j];
			}
		}
	}
	for (int i = 0; i < n-7; i++) {
		for (int j = 0; j < m-7; j++) {
			for (int k = 0; k < 8; k++) {
				sum += B[k + j][i];
			}
			if (sum < min) min = sum;
			sum = 0;
		}
	}
	for (int i = 0; i < n - 7; i++) {
		for (int j = 0; j < m - 7; j++) {
			for (int k = 0; k < 8; k++) {
				sum += W[k + j][i];
			}
			if (sum < min) min = sum;
			sum = 0;
		}
	}
	cout << min;
}