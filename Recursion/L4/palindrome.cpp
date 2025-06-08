#include<bits/stdc++.h>
using namespace std;

// Check palidndrome or not - using two pointers which we genrally do

bool isPalindrome(string &s, int i, int j){
    if(i >= j) return true;
    if(s[i] != s[j]) return false;
    return isPalindrome(s, i+1, j-1);
}



//  Check palidndrome or not - using one pointer. 
bool checkPalindrome(string &s, int i, int n){
    if(i >= n/2) return true;
    if(s[i] != s[n-i-1]) return false;
    checkPalindrome(s, i+1, n);
}

int main(){
    string s = "madam";
    int n = s.size();

    cout << isPalindrome(s, 0, n-1);
    // cout << checkPalindrome(s, 0, n);

}

// TC - O(N/2) 
// SC - O(N/2) recursive stack space 
