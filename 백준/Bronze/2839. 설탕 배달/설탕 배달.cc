#include <iostream>
using namespace std;

int main(){
    int size{0};
    cin >>size;
    if(size%5 == 0){
        cout << size/5;
        exit(0);
    }

    for(int i = 3; i<size; i+=3){
        if((size - i)%5 == 0){
            cout << (size - i)/5 + i/3;
            exit(0);
        }
    }
    if(size%3 == 0){
        cout << size/3;
        exit(0);
    }
    cout << -1;
}