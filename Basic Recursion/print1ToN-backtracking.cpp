#include<bits/stdc++.h>
using namespace std;

void fn(int i, int n){
    if(i < 1){
        return;
    }
    fn(i-1, n);
    cout << i << endl;
}
int main(){
    int n;
    cin >> n;
    fn(n, n);
}