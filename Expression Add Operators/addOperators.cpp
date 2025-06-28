#include<bits/stdc++.h>
using namespace std;


void solve(int ind, string path, long resSoFar, long prevNum, string s, int target, vector<string> &ans){
    if(ind == s.length()) {
        if(resSoFar == target) ans.push_back(path);
        return;
    }

    string currStr;
    long num = 0;
    for(int i = ind; i<s.length(); i++){
        if(i > ind && s[ind] == '0') break;
        currStr += s[i];
        num = num * 10 + s[i] - '0';
        if(ind == 0){
            solve(i+1, path + currStr, num, num, s, target, ans);
        }
        else {
            solve(i + 1, path + "+" + currStr, resSoFar + num, num, s, target, ans);
            solve(i + 1, path + "-" + currStr, resSoFar - num, -num, s, target, ans);
            solve(i + 1, path + "*" + currStr, resSoFar - prevNum + prevNum * num, prevNum * num, s, target, ans);
        }
    }
}



int main() {
    string s = "123";
    int target = 6;

    vector<string> ans;
    solve(0, "", 0, 0, s, target, ans);
    for(auto it: ans) cout << it << " ";
}