#include<bits/stdc++.h>
using namespace std;


void printAllPermutations(vector<int> &arr, vector<int> &ds, vector<int> &hashArr, vector<vector<int>> &ans, int n){
    if(ds.size() == n){
        ans.push_back(ds);
        return;
    }

    for(int i = 0; i<n; i++){
        if(hashArr[i] != 1){
            ds.push_back(arr[i]);
            hashArr[i] = 1;
            printAllPermutations(arr, ds, hashArr, ans, n);
            ds.pop_back();
            hashArr[i] = 0;
        }
    }
}

// TC - O(n! * n)
// SC - O(n) +  O(n)     +  O(n)
//      ds    hashArr  auxillary stack space

// In this approach - 1 we are using the extra space of O(n) for hashArr and ds O(n)
// in the next L13 we will see the approach - 2 in that we won't use this extra space of hasharr 


int main(){
    vector<int> arr = {1, 2, 3};
    int n = arr.size(); 
    vector<int> hashArr(n, 0);
    vector<int> ds;
    vector<vector<int>> ans;

    printAllPermutations(arr, ds, hashArr, ans, n);

    for(auto it: ans){
        for(auto ele: it){
            cout << ele <<  " ";
        }
        cout << endl;
    }

}
