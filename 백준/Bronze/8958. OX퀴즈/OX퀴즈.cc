#include <iostream>
#include <string>
using namespace std;
int main() {
	int temp,score=0,k=1;
	string str;
	cin >> temp;
	for (int i = 0; i < temp; i++) {
		cin >> str;
		for (int j = 0; j < str.size(); j++) {
			if (str[j] == 'O') {
				score += k;
				k++;
			}
			else k = 1;
		}
		cout << score << endl;
		score = 0;
		k = 1;
	}
}