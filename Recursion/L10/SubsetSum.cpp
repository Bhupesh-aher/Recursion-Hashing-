#include<bits/stdc++.h>
using namespace std;

void subsetSum(int ind, int sum, vector<int>&arr, vector<int> &ds){
    if(ind == arr.size()){
        ds.push_back(sum);
        return;
    }

    // you can write like this  - my code
    // sum += arr[ind];
    // subsetSum(ind + 1, sum, arr, ds);  // pick the element 
    // sum -= arr[ind];

    // subsetSum(ind + 1, sum, arr, ds);  // don't pick the element

    // or you can write like this as well - stiver's code

    // pick the element 
    subsetSum(ind + 1, sum + arr[ind], arr, ds);

    // // don't pick the element
    subsetSum(ind + 1, sum, arr, ds);
}

int main(){
    vector<int> arr = {3, 1, 2};
    int n = arr.size(); 
    vector<int> ds;

    subsetSum(0, 0, arr, ds);
    sort(ds.begin(), ds.end());  //O(2^N log 2^N) 

    for(auto it: ds) cout << it << endl;

}

// TC - O(2^N) + O(2^N log 2^N)
// SC - O(2^N) + O(N)   
// O(2 ^ N) space for storing all sum of subsets and O(N) is for recursive stack space 


