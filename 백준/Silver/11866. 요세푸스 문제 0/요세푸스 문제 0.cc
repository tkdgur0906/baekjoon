#include <iostream>
#include <list>
using namespace std;

list<int> l;
list<int>::iterator iter;
list<int>::iterator dummy;

void addIter(int k) {
	
	for (int i = 1; i < k; i++) {
		dummy = iter;
		dummy++;
		if (iter == l.end()) {
			iter = l.begin();
			iter++;
		}
		else if (dummy == l.end()) {
			iter = l.begin();
		}
		else {
			iter++;
		}
	}
}

int main() {
	int n, k;
	
	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		l.push_back(i);
	}

	iter = l.begin();

	cout << '<';
	while (!l.empty()) {
		addIter(k);
		if (iter == l.end() && l.size() == 1) {
			iter++;
		}
		if (l.size() == 1) {
			cout << *iter;
		}
		else {
			cout << *iter << ", ";
		}
		iter = l.erase(iter);
	}
	cout << '>';
}