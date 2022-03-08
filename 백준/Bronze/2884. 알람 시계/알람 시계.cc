#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    if(b>=45){
        cout << a << " " << b-45 << endl;
    }
    else if(a==0 && b<45){
        cout << 23 << " " << b+15 << endl;
    }
    else cout << a -1 << " " << b+15 << endl;
}