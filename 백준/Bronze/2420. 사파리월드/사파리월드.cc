#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long a,b,mx,mn;
    cin >> a >>b;
    mx = max(a,b);
    mn = min(a,b);
    cout << abs(a-b);
}