#include <iostream>
#include <string>
#include <climits>
using namespace std;

int n,m,temp,ans;
bool broken[10];

//n을 이루는 숫자가 고장나지 않으면 true
bool check(int n) {
	if (n == 0) {
		if (broken[0]) {
			return false;
		}
		return true;
	}
	while (n != 0) {
		int digit = n % 10;
		if (broken[digit]) {
			return false;
		}
		n /= 10;
	}
	return true;
}
                           

int main() {
	cin >> n >> m;
	while (m--) {
		cin >> temp;
		broken[temp] = true;
	}

	ans = abs(n - 100);
	for (int i = n; i >= 0; i--) {
		if (check(i)) {
			temp = to_string(i).size() + abs(n - i);
			ans = min(temp, ans);
			break;
		}
	}

	for (int i = n; i <= 1000000; i++) {
		if (check(i)) {
			temp = to_string(i).size() + abs(n - i);
			ans = min(temp, ans);
			break;
		}
	}
	cout << ans;

}