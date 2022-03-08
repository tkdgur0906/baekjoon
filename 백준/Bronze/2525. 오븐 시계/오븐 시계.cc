#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e, f;
    cin >> a >> b >> c;
    d = b + c;
    if (d < 60) cout << a << " " << d << endl;
    else if (d >= 60) {
        e = (d / 60 + a) % 24;
        f = d % 60;
        if (f >= 60) {
            e = (e + 1) % 24;
            f = f % 60;
        }
        cout << e << " " << f << endl;
    }
}