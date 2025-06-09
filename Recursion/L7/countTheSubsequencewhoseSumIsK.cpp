#include<bits/stdc++.h>
using namespace std;

// count of the subsequence whose sum is k
// total number of subsequence whose sum is k


//we will learn - technique to count in the below code
// on base condtion if(sum == k) satisfied then return 1. if not satsifed then return 0
// call both recursive function and store them like this
// left = f()
// right = f()
// then 
// return left + right
// this is the template where they will ask for the count. just follow this structure of the code



int printF(int ind, vector<int>&ds, int sum, int arr[], int n, int k){
    if(ind == n){
        // condition satisfied
        if(sum == k) return 1;
        // condition not satisfied
        return 0;
    }

    ds.push_back(arr[ind]);
    sum += arr[ind];
    int left = printF(ind + 1, ds, sum, arr, n, k) == true;

    sum -= arr[ind];
    ds.pop_back();
    int right = printF(ind + 1, ds, sum, arr, n, k) == true;

    return left + right;
}



// here there are only 2 recursive calls
// if there n recusrive calls follow the same template
// base case will be same
// in muliple recursive calls do this instaed of declaring 5-6 variables like l r x y z
// int s = 0;
// for(int i = 1; i<n; i++)
//      s += f();
// return s
// we will do this in problems like n-queen


int main(){
    int arr[] = {1, 2, 1};
    int n = 3;
    int k = 2;
    vector<int> ds;
    cout << printF(0, ds, 0, arr, n, k);

}

// TC - O(2^N) exponential in nature 
// SC - O(N) recursive stack space 
