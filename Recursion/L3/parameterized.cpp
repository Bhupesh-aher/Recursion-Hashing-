#include<bits/stdc++.h>
using namespace std;

// my code sum of N numbers using 1 to N
// void parametrized(int i, int sum, int n){
//    if(i > n) {
//     cout << sum;
//     return;
//    }
//    parametrized(i + 1, sum + i, n);
// }


// strivers code - sum of N numbers using N to 1 
void parametrized(int i, int sum){
    if(i < 1) {
        cout << sum;
        return;
    }
    parametrized(i-1, sum + i);

}

int main(){
    int n = 3;
    // parametrized(1, 0, n);
    parametrized(n, 0);

}

// TC - O(N) 
// SC - O(N) recursive stack space 