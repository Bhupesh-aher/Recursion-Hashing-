#include<bits/stdc++.h>
using namespace std;

void PrintAllPermumatioins(int index, vector<int> &arr,  vector<vector<int>> &ans, int n){
    if(index == n){
        ans.push_back(arr);
        return;
    }

    for(int i = index; i<n; i++){
        swap(arr[index], arr[i]);
        PrintAllPermumatioins(index + 1, arr, ans, n);
        swap(arr[index], arr[i]);
    }
}

// TC - O(n! * n)
// SC - O(n)   auxillary stack space
// we are not using any extra SC like ds and hashArr which we used in approach - 1

int main(){
    vector<int> arr = {1, 2, 3};
    int n = arr.size(); 
    vector<vector<int>> ans;
    PrintAllPermumatioins(0, arr, ans, n);

    for(auto it: ans){
        for(auto ele: it){
            cout << ele <<  " ";
        }
        cout << endl;
    }

}
