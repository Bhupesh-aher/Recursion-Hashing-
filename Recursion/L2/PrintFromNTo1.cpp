#include<bits/stdc++.h>
using namespace std;

void print1ToN(int i, int n){
    if(i < 1) return;
    cout << i << endl;
    print1ToN(i-1, n);
}

int main(){
    int n = 3;
    print1ToN(n, n);
}

// TC - O(N) 
// SC - O(N) recursive stack space 
