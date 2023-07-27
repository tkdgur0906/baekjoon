#include <iostream>
#include <string>
using namespace std;

string str;

bool solve() {
    for (int i = 0; i < str.size(); i++) {
        if (i == str.size() / 2 + 1) break;
        if (str[i] != str[str.size() - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    cin >> str;
    solve() ? cout << 1: cout << 0;
}