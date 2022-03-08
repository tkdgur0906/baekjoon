#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a{0},b{0},c{0};
    cin >> a >> b >> c;
    int arr[3] = {a,b,c};
    sort(arr,arr+3);
    cout << arr[1];
}