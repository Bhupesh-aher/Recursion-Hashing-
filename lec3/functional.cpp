#include<bits/stdc++.h>
using namespace std;

int sumOfNumbers(int n){
    if(n == 0){
        return 0;
    }
    return n + sumOfNumbers(n-1);
}

int fact(int n){
    if(n == 1){
        return 1;
    }
    return n * fact(n-1);
}


int main(){
     int n;
    cin >> n;

    int totalSum = sumOfNumbers(n);
    int totalFact = fact(n);

    cout << totalSum << endl;
    cout << totalFact;
}