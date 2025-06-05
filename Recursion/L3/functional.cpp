#include<bits/stdc++.h>
using namespace std;

// Sum of first N numbers
int functional(int n){
    if(n == 0) return 0;
    return n + functional(n - 1);

}


// Factorial of N numbers
// int functional(int n){
//     if(n == 0) return 1;
//     return n * functional(n - 1);

// }

int main(){
    int n = 4;
    cout << functional(n);
    

}

// TC - O(N) 
// SC - O(N) recursive stack space 