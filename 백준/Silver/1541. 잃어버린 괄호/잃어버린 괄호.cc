#include <iostream>
#include <string>
#include <vector>
using namespace std;

int n,ans;
string str;
vector<int> num;
vector<char> op;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> str;
	bool bo = false;
	
	string temp = "";

	for (int i = 0; i < str.size(); i++) {
		if (str[i] >= '0' && str[i] <= '9') {
			temp += str[i];
		}
		else if (!bo) {
			if (str[i] == '-') bo = true;
			if (temp == "") continue;
			ans += stoi(temp);
			temp = "";
		}
		else {
			if (temp == "") continue;
			ans -= stoi(temp);
			temp = "";
		}
	}
	if (bo) ans -= stoi(temp);
	else ans += stoi(temp);
	cout << ans;
}