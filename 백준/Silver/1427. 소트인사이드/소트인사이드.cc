#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
	
bool compare(int a, int b) { return a > b; }

int main() {
	string str;
	vector<char> vec;
	cin >> str;
	
	for (int i = 0; i < str.size(); i++) {
		vec.push_back(str[i]);
	}
	sort(vec.begin(), vec.end(), compare);

	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i];
	}
}