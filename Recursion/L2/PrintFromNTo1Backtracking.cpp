#include<bits/stdc++.h>
using namespace std;

void printNTo1Backtracking(int i, int n){
    if(i > n) return;
    printNTo1Backtracking(i+1, n);
    cout << i << endl;
}

int main(){
    int n = 3;
    printNTo1Backtracking(1, n);
}

// TC - O(N) 
// SC - O(N) recursive stack space 