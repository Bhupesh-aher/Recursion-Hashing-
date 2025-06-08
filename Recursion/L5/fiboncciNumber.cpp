#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n <= 1) return n;
    int last = fib(n-1);
    int secondLast = fib(n-2);
    return last + secondLast;
}

int main(){
    int n = 6;
    cout << fib(n);

}

// TC - O(2^N) exponential in nature 
// SC - O(2^N) recursive stack space 
