#include<bits/stdc++.h>
using namespace std;

bool f(string &s, int left, int n){
    if(left >= n/2) return true;

    if(s[left] != s[n-left-1]) return false;

    return f(s, left+1, n);
}

int main(){
    string s;
    cin >> s;
    int n = s.size();
    bool isStringPalindorme = f(s, 0, n);
    cout << isStringPalindorme;
}