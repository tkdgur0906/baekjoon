#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string str;
	int arr[26];
	memset(arr, -1, sizeof(int) * 26);
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		if (arr[str[i] - 97] == -1) {
			arr[str[i] - 97] = i;
		}
	}
	for (int i = 0; i < 26; i++) {
		cout << arr[i] << " ";
	}
}