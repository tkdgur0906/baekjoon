#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
	cin >> str;
	int arr[26] = { 0, };
	for (int i = 0; i < str.size(); i++) {
		if (str[i] - 0 < 97) {
			arr[str[i] - 65]++;
		}
		else arr[str[i] - 97]++;
	}
	int max = 0;
	char ans;
	for (int i = 0; i < 26; i++) {
		if (arr[i] > max) {
			max = arr[i];
			ans = 'A' + i;
		}
		else if (arr[i] == max) {
			ans = '?';
		}
	}
	cout << ans;
}