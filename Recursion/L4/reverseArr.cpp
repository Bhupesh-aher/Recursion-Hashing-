#include<bits/stdc++.h>
using namespace std;


// Reverse array - using two pointers which we genrally do
void reverse(int i, int j, int arr[]){
    if(i >= j) return;
    swap(arr[i], arr[j]);
    reverse(i+1, j-1, arr);
}

//  Reverse array - using one pointer. 
void rerverseArr(int i, int arr[], int n){
    if(i >= n / 2) return;
    swap(arr[i], arr[n-i- 1]);
    rerverseArr(i+1, arr, n);

}

// both the code are same just in first code we use the two pointers and in second code we use one pointer

int main(){
    int n = 5;
    int arr[] = {1, 2, 3, 4, 2};
    for(auto it: arr) cout << it << " ";

    // reverse(0, n-1, arr);
    rerverseArr(0, arr, n);
    cout << endl;
    for(auto it: arr) cout << it << " ";

    

}

// TC - O(N/2) 
// SC - O(N/2) recursive stack space 
