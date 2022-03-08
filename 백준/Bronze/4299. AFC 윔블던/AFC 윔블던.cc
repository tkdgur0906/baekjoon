#include <iostream>
using namespace std;

int main() {
	int sum, gap, a, b;
	cin >> sum >> gap;
	a = (sum + gap) / 2;
	b = (sum - gap) / 2;
	if (a+b != sum ||a-b!=gap||a<0||b<0) {
		cout << -1;
	}
	else {
        if(a>b){
		    cout << a << " " << b;
        }
        else{
            cout << b << " " << a;
        }
     }
}