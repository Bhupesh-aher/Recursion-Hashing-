#include<bits/stdc++.h>
using namespace std;

// 1st approach - use set to store unique combinations
void printF(int ind, int target, vector<int> &arr, int n, set<vector<int>> &ans, vector<int> &ds){
   
    if(ind == n){
        if(target == 0){
            ans.insert(ds); //O(k * logN)
        }
        return;
    }

    // pick / take case
    if(arr[ind] <= target){
        ds.push_back(arr[ind]);
        printF(ind +1, target - arr[ind], arr, n, ans, ds);

        ds.pop_back();
    }
    // not pick / not take case
    printF(ind + 1, target, arr, n,  ans, ds);
}

// TC - O(2^N) * k * logN (N-set size)
// SC - O(k*x), k is the average length of the combination (ds) and x is the total no. of combinations 
// SC - O(k*x) + O(N) this O(N) for recursive stack space





// 2nd approach - not using set to avoid log N TC 
void printF2(int ind, int target, vector<int> &arr, int n, vector<vector<int>> &ans, vector<int> &ds){
   if(target == 0){
        ans.push_back(ds); // O(k)
        return;
    }
    for(int i = ind; i<n; i++){
        if(i > ind && arr[i] == arr[i-1]) continue;
        if(arr[i] > target) break;
        ds.push_back(arr[i]);
        printF2(i + 1, target - arr[i], arr, n, ans, ds);
        ds.pop_back();
    }
}
// TC - O(2^N) * k 
// SC - O(k * X) + O(N)

int main(){
    vector<int> arr = {10,1,2,7,6,1,5};
    int n = arr.size(); 
    sort(arr.begin(), arr.end());
    int target = 8;

    // 1st apprach - 
    // set<vector<int>> ans;
    // vector<int> ds;
    // printF(0, target, arr, n, ans, ds);


    // 2nd approach - 
    vector<vector<int>> ans;
    vector<int> ds;
    printF2(0, target, arr, n, ans, ds);
    vector<vector<int>> comb;
    
    
    for(auto it: ans){
        comb.push_back(it);
    }
    
    for(auto it: comb){
        for(auto ele: it){
            cout << ele << " ";
        }
        cout << endl;
    }



}


