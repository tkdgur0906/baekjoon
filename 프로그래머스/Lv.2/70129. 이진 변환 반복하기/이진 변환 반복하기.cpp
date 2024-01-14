#include <string>
#include <vector>
#include <iostream>
using namespace std;

int change_cnt, zero_cnt;
string str = "";

string reverseStr(string str) {
    string revStr = "";
    for(int i = str.size() - 1;i>=0;i--){
        revStr += str[i];
    }
    return revStr;
}

string removeZero(string s) {
    string removeZeroStr = "";
    for(int i = 0;i<s.size();i++){
        if(s[i] == '1') removeZeroStr += '1';
        else zero_cnt++;
    }
    return removeZeroStr;
}

string changeBinary(int x) {
    string str = "";
    while(x != 0) {
        if(x % 2 == 1) {
            str += '1';
        }
        else str += '0';
        x /= 2;
    }
    return reverseStr(str);
}

vector<int> solution(string s) {
    vector<int> answer;
    str = s;
    while(str != "1") {
        str = removeZero(str);
        str = changeBinary(str.size());
        change_cnt++;
    }
    answer.push_back(change_cnt);
    answer.push_back(zero_cnt);
    return answer;
}