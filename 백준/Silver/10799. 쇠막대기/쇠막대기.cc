#include<iostream>
#include <stack>
#include <string>
using namespace std;

stack<char> st;
string str;
int ans;

int main() {
	cin >> str;
	for (int i = 0; i < (int) str.size(); i++) {
		if (str[i] == '(') {
			st.push('(');
		}
		else {
			st.pop();
			if (str[i - 1] == '(') {
				ans += st.size();
			}
			else {
				ans++;
			}
		}
	}
	cout << ans;
}