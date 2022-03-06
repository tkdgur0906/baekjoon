#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout << fixed << setprecision(9);
    double A,B;
    cin >> A >> B;
    cout << A / B << endl;
    return 0;
}