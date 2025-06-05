#include<bits/stdc++.h>
using namespace std;

void print1ToNBacktracking(int i, int n){
   if(i < 1) return;
   print1ToNBacktracking(i - 1, n);
   cout << i << endl;
}

int main(){
    int n = 5;
    print1ToNBacktracking(n, n);
}

// TC - O(N) 
// SC - O(N) recursive stack space 