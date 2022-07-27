#include <iostream>
#include <string>
#include <list>
using namespace std;



int main() {
	string str;
	list<int> l;
	list<int>::iterator iter;
	int n, x;
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str == "push") {
			cin >> x;
			l.push_back(x);
		}
		else if (str == "pop") {
			if (l.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << l.front() << '\n';
				iter = l.begin();
				iter = l.erase(iter);
			}
		}
		else if (str == "size") {
			cout << l.size() << '\n';
		}
		else if (str == "empty") {
			if (l.empty()) {
				cout << 1 << '\n';
			}
			else {
				cout << 0 << '\n';
			}
		}
		else if (str == "front") {
			if (l.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << l.front() << '\n';
			}
		}
		else if (str == "back") {
			if (l.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << l.back() << '\n';
			}
		}
	}
}