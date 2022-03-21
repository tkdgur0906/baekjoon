#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	stack<int> st;
	string str;
	bool b = true;
	st.push(0);
	int n, temp,k=1;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		while (st.top() < temp) {
			st.push(k);
			k++;
			str += '+';
		}
		if (temp == st.top()) {
			str += '-';
			st.pop();
		}
		else {
			b = false;
			break;
		}
	}
	if (b == true) {
		for (int i = 0; i < str.size(); i++) {
			cout << str[i] << "\n";
		}
	}
	else cout << "NO";
}