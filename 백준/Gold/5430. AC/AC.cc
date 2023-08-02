#include <iostream>
#include <deque>
#include <string>
using namespace std;

int t, n;
string str,arr;
deque<string> dq;

int main() {
	cin >> t;
	while (t--) {
		cin >> str >> n >> arr;
		string temp = "";
		for (int i = 1; i < arr.size() - 1; i++) {
			if (arr[i] >= '0' && arr[i] <= '9') {
				temp += arr[i];
			}
			else {
				dq.push_back(temp);
				temp = "";
			}
		}
		if(temp != "") dq.push_back(temp);
		bool is_front = true;
		bool is_error = false;
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == 'R') {
				if (is_front) is_front = false;
				else is_front = true;
			}
			else {
				if (dq.empty()) {
					cout << "error\n";
					is_error = true;
					break;
				}
				if (is_front) dq.pop_front();
				else dq.pop_back();
			}
		}
		if (!is_error) {
			cout << '[';
			while (!dq.empty()) {
				if (is_front) {
					cout << dq.front();
					dq.pop_front();
				}
				else {
					cout << dq.back();
					dq.pop_back();
				}
				if (!dq.empty()) cout << ',';
			}
			cout << "]\n";
		}
	}
}