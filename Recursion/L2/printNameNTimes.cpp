#include<bits/stdc++.h>
using namespace std;

void printName(int i, int n){
    if(i > n) return;
    cout << "Name" << endl;
    printName(i+1, n);
}

int main(){
    int n = 3;
    printName(1, n);
}

// TC - O(N) 
// SC - O(N) recursive stack space 