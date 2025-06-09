#include<bits/stdc++.h>
using namespace std;

// Print one subsequence whose sum is k

// bool flag = false;
// Striver's code 
// void printF(int ind, vector<int>&ds, int sum, int arr[], int n, int k){
//     if(ind == n){
//         if(sum == k && flag == false){
//             flag = true;
//             for(auto it: ds) cout << it << " ";
//             cout << endl;
//         }
//         return;
//     }

//     ds.push_back(arr[ind]);
//     sum += arr[ind];
//     printF(ind + 1, ds, sum, arr, n, k);

//     sum -= arr[ind];
//     ds.pop_back();
//     printF(ind + 1, ds, sum, arr, n, k);
// }

// This is the one way you can do this but this not recommended as we are using global variable


// we will learn - technique to print only one ans in the below code
// in base condition if condition satisfyed in our case if(sum == k) then we will return true if not satisfyed we will return false
// put the recursive call in the if() statment and check if recursive call is equal to true then return true. if not true then at the end after your both recursive call just return false at the last line of the function
// no need to continue means don't call the next recursvie call 



bool printF(int ind, vector<int>&ds, int sum, int arr[], int n, int k){
    if(ind == n){
        // condition satisfied
        if(sum == k){
            for(auto it: ds) cout << it << " ";
            cout << endl;
            return true;
        }
        // condition not satisfied
        return false;
    }

    ds.push_back(arr[ind]);
    sum += arr[ind];
    if(printF(ind + 1, ds, sum, arr, n, k) == true) return true;

    sum -= arr[ind];
    ds.pop_back();
    if(printF(ind + 1, ds, sum, arr, n, k) == true) return true;

    return false;
}


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

