#include<bits/stdc++.h>
using namespace std;

void print1ToN(int i, int n){
    if(i > n) return;
    cout << i << endl;
    print1ToN(i+1, n);
}

int main(){
    int n = 3;
    print1ToN(1, n);
}

// TC - O(N) 
// SC - O(N) recursive stack space 