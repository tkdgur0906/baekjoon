#include <iostream>
#include <stack>
using namespace std;

int main() {
	int temp, n, sum = 0;
	stack<int> st;

	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> temp;
		if (temp == 0 && !st.empty()) {
			st.pop();
		}
		else if (temp != 0) {
			st.push(temp);
		}	
	}

	while (!st.empty()) {
		sum = sum + st.top();
		st.pop();
	}
	cout << sum << '\n';
}