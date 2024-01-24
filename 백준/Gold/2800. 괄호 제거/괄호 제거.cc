#include<iostream>
#include <stack>
#include <string>
#include <vector>
#include <set>
using namespace std;

string str;
stack<int> st;
vector<string> ans;
vector<pair<int, int>> loc;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   
    cin >> str;
    for (int i = 0; i < (int)str.length(); i++) {
        if (str[i] == '(') {
            st.push(i);
        }
        else if (str[i] == ')') {
            loc.push_back({ st.top(), i });
            st.pop();
        }
    }

    ans.push_back(str);

    for (int i = 0; i < (int)loc.size(); i++) {
        vector<string> vec;
        for (int j = 0; j < (int)ans.size(); j++) {
            string temp = ans[j];
            temp[loc[i].first] = 'x';
            temp[loc[i].second] = 'x';
            vec.push_back(temp);
        }
        for (int j = 0; j < (int)vec.size(); j++) {
            ans.push_back(vec[j]);
        }
    }
    
    set<string> s;
    for (auto ss : ans) {
        if (ss != str) {
            string q = "";
            for (auto a : ss) {
                
                if (a != 'x') {
                    q += a;
                }
            }
            if(q != "") s.insert(q);
        }
    }
    
    for (set<string>::iterator it = s.begin(); it != s.end(); it++) {
        string temp = *it;
        for (auto a : temp) {
            if (a == 'x') continue;
            cout << a;
        }
        cout << '\n';
    }
}