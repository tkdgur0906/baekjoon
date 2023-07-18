#include <iostream>
#include <string>
using namespace std;

int n, temp;
string str;
int arr[21];

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);

	cin >> n;
	while (n--) {
		cin >> str;
		if (str == "add") {
			cin >> temp;
			arr[temp] = 1;
		}
		else if (str == "remove") {
			cin >> temp;
			arr[temp] = 0;
		}
		else if (str == "check") {
			cin >> temp;
			cout << arr[temp] << '\n';
		}
		else if (str == "toggle") {
			cin >> temp;
			arr[temp] ^= 1;
		}
		else if (str == "all") {
			for (int i = 1; i <= 20; i++) {
				arr[i] = 1;
			}
		}
		else if (str == "empty") {
			for (int i = 1; i <= 20; i++) {
				arr[i] = 0;
			}
		}
	}
}