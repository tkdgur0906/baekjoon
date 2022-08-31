#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string str;

	while (getline(cin, str)) {
	
		stack<int> st;

		if (str == ".") {
			return 0;
		}

		for (int i = 0; i < str.size(); i++) {
			if (str[i] == '(' || str[i] == '[') {
				st.push(str[i]);
			}
			else if (str[i] == ')') {
				if (st.empty() || st.top() != '(') {
					cout << "no\n";
					break;
				}
				else if (st.top() == '(') {
					st.pop();
				}
			}
			else if (str[i] == ']') {
				if (st.empty() || st.top() != '[') {
					cout << "no\n";
					break;
				}
				else if (st.top() == '[') {
					st.pop();
				}
			}
			if (str[i] == '.') {
				if (!st.empty()) {
					cout << "no\n";
				}
				else {
					cout << "yes\n"; 
				}
			}
		}
	}
}