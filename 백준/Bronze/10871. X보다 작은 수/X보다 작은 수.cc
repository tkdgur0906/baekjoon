#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, X, temp = 0;
    cin >> N >> X;
    vector<int> A;
    for(int i = 0; i<N; i++){
        cin >> temp;
        if (temp < X) A.push_back(temp);
    }
    for(int i = 0 ; i < A.size(); i++){
        cout << A[i] << " ";
    }
}