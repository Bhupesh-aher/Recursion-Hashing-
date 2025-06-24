#include<bits/stdc++.h>
using namespace std;

void solve(int index, string output, vector<string> &ans, string mapping[], string digits){
    if(index >= digits.length()){
        ans.push_back(output);
        return;
    }

    int element = digits[index] - '0';
    string value = mapping[element];

    for(int i = 0; i<value.length(); i++){
        output.push_back(value[i]);
        solve(index + 1, output, ans, mapping, digits);
        output.pop_back();
    }
}

// TC - O(4^N∗N)
// SC - O(4^N*N)

int main() {
    string digits = "23";
    vector<string> ans;
    if(digits.length() == 0) cout << "[]";
    string output = "";
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    solve(0, output, ans, mapping, digits);

    for(auto it: ans) cout << it << " ";
}