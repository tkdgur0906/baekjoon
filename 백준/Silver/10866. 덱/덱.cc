#include <iostream>
#include <string>
#include <list>
using namespace std;

int main() {
	string str;
	int temp, n;
	list<int> l;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> str;

		if (str == "push_front") {
			cin >> temp;
			l.push_front(temp);
		}
		else if (str == "push_back") {
			cin >> temp;
			l.push_back(temp);
		}
		else if (str == "pop_front") {
			if (l.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << l.front() << "\n";
				l.pop_front();
			}
		}
		else if (str == "pop_back") {
			if (l.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << l.back() << "\n";
				l.pop_back();
			}
		}
		else if (str == "size") {
			cout << l.size() << "\n";
		}
		else if (str == "empty") {
			if (l.empty()) {
				cout << 1 << "\n";
			}
			else {
				cout << 0 << "\n";
			}
		}
		else if (str == "front") {
			if (l.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << l.front() << "\n";
			}
		}
		else if (str == "back") {
			if (l.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << l.back() << "\n";
			}
		}
	}
}