#include<bits/stdc++.h>
using namespace std;


// 1st apprach - use set to store unique subsets
void subset(int ind, vector<int> &arr, set<vector<int>> &ans, vector<int> &ds){
    if(ind == arr.size()){
        ans.insert(ds);
        return;
    }

    ds.push_back(arr[ind]);
    subset(ind + 1, arr, ans, ds);
    ds.pop_back();
    subset(ind + 1, arr, ans, ds);
}
// The unique subsets are
// [ [ ][ 1 ][ 1 2 ][ 1 2 2 ][ 2 ][ 2 2 ] ]

// Time Complexity: O( 2^n *(k log (x) )). 2^n  for generating every subset and k* log( x)  to insert every combination of average length k in a set of size x. After this, we have to convert the set of combinations back into a list of list /vector of vectors which takes more time.

// Space Complexity:  O(2^n * k) to store every subset of average length k. Since we are initially using a set to store the answer another O(2^n *k) is also used.







// 2nd apprpach - avoid duplicates during the recursion calls
void subset2(int ind, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds){
    ans.push_back(ds);

    for(int i = ind; i<arr.size(); i++){
        if(i != ind && arr[i] == arr[i-1]) continue;
        ds.push_back(arr[i]);
        subset2(i + 1, arr, ans, ds);
        ds.pop_back();
    }
}




// Time Complexity: O(2^n) for generating every subset and O(k)  to insert every subset in another data structure if the average length of every subset is k. Overall O(k * 2^n).

// Space Complexity: O(2^n * k) to store every subset of average length k. Auxiliary space is O(n)  if n is the depth of the recursion tree. Overall O(2^n * k) + O(n)





int main(){
    vector<int> arr = {1,2,2};
    sort(arr.begin(), arr.end());

    // 1st approach
    // set<vector<int>> ans;
    // vector<int> ds;
    // subset(0, arr, ans, ds);

    // vector<vector<int>> comb;
    
    // for(auto it: ans){
    //     comb.push_back(it);
    // }
    
    // for(auto it: comb){
    //     for(auto ele: it){
    //         cout << ele << " ";
    //     }
    //     cout << endl;
    // }



    // 2nd appraoch
    vector<vector<int>> ans;
    vector<int> ds;
    subset2(0, arr, ans, ds);

    for(auto it: ans){
        for(auto ele: it){
            cout << ele  << " ";
        }
        cout << endl;
    }


}

