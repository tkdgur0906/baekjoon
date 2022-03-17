#include <iostream>
#include <string>
using namespace std;

class Stack {
public:
	int arr[10000];
	int temp = 0;
	void push(int x) {
		arr[temp] = x;
		temp++;
	}
	void pop() {
		if (temp == 0) cout << -1 << endl;
		else {
			temp--;
			cout << arr[temp] << endl;
		}
	}
	void size() {
		cout << temp << endl;
	}
	void empty() {
		if (temp == 0) cout << 1 << endl;
		else cout << 0 << endl;
	}
	void top() {
		if (temp == 0) cout << -1 << endl;
		else cout << arr[temp - 1] << endl;
	}
};

int main() {
	int n,temp;
	string str;
	Stack stack;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str == "push") {
			cin >> temp;
			stack.push(temp);
		}
		else if (str == "pop") stack.pop();
		else if (str == "size") stack.size();
		else if (str == "empty") stack.empty();
		else if (str == "top") stack.top();
	}
}