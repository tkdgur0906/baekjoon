#include <iostream>
#include <string>
#include <list>
using namespace std;

int main() {
	string str;
	int n;
	char x, y;
	list<char> l;

	cin >> str;
	cin >> n;

	for (int i = 0; i < str.size(); i++) {
		l.push_back(str[i]);
	}
	list<char>::iterator iter = l.end();

	for (int i = 0; i < n; i++) {
		cin >> x;
		switch (x) {
		case 'L':
			if (iter != l.begin()) {
				iter--;
			}
			//cout << *iter << endl;
			break;
		case 'D':
			if (iter != l.end()) {
				iter++;
			}	
			break;
		case 'B':
			if (iter != l.begin()) {
				iter--;
				iter = l.erase(iter);
			}
			break;
		case 'P':
			cin >> y;
			iter = l.insert(iter, y);
			iter++;
			break;
		}
	}
	
	for (iter = l.begin(); iter != l.end(); iter++) {
		cout << *iter;
	}
}