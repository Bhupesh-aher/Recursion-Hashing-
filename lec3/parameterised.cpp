#include<bits/stdc++.h>
using namespace std;

void sumOfNumbers(int i, int sum){
    if(i < 1){
        cout << sum;
        return;
    }
    sumOfNumbers(i-1, sum+i);
}

int main(){
     int n;
    cin >> n;
    sumOfNumbers(n, 0);

}