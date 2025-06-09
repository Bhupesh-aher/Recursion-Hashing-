#include<bits/stdc++.h>
using namespace std;

void printF(int ind, int target, int arr[], int n, vector<vector<int>> &ans, vector<int> &ds){
   
    if(ind == n){
        if(target == 0){
            ans.push_back(ds);
        }
        return;
    }

    // pick / take case
    if(arr[ind] <= target){
        ds.push_back(arr[ind]);
        printF(ind, target - arr[ind], arr, n, ans, ds);

        ds.pop_back();
    }
    // not pick / not take case
    printF(ind + 1, target, arr, n,  ans, ds);
}


int main(){
    int arr[] = {2, 3, 6, 7};
    int n = 4; 
    int target = 7;
    vector<vector<int>> ans;
    vector<int> ds;
    printF(0, target, arr, n, ans, ds);

    for(auto it: ans) {
        for(auto ele: it){
            cout << ele << " ";
        }
        cout << endl;
    }

}

// TC - O(2^N) * k exponential in nature 
// SC - O(k*x), k is the average length and x is the no. of combinations
// k - means averge size of each combination
// x - means there are total x combination we form

