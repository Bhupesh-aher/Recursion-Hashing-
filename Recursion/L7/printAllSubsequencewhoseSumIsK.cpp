#include<bits/stdc++.h>
using namespace std;

// Print all subsequence whose sum is k


// This my code 
void printf(int ind, vector<int>& ds, int arr[], int n, int k){
    if(ind == n) {
        int sum = 0;
        for(auto it: ds) sum += it;
        if(sum == k) {
            for(auto it: ds) cout << it << " ";
            cout << endl;
        }
        return;
    }

    ds.push_back(arr[ind]);
    printf(ind + 1, ds, arr, n, k);

    ds.pop_back();
    printf(ind + 1, ds, arr, n, k);
}



// Striver's code 
void printF(int ind, vector<int>&ds, int sum, int arr[], int n, int k){
    if(ind == n){
        if(sum == k){
            for(auto it: ds) cout << it << " ";
            cout << endl;
        }
        return;
    }

    // pick
    ds.push_back(arr[ind]);
    sum += arr[ind];
    printF(ind + 1, ds, sum, arr, n, k);

    sum -= arr[ind];
    ds.pop_back();

    // not pick
    printF(ind + 1, ds, sum, arr, n, k);
}







// both the above code is same just striver is carrying the sum paramter from the start
// where as in my code i am not caariyng the sum paramter. instead direclty calcualting in the base case
// in my code i am iterating and calculating the sum in the base case
// in striver's code we are maintaning the sum paramter from the start

int main(){
    int arr[] = {1, 2, 1};
    int n = 3;
    int k = 2;
    vector<int> ds;

    // printf(0, ds, arr, n, k);
    printF(0, ds, 0, arr, n, k);
}

// TC - O(2^N) exponential in nature 
// SC - O(N) recursive stack space 

