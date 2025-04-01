#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int start, int end){
    if(start >= end){
        return;
    }   
    swap(arr[start], arr[end]);
    reverseArray(arr, start+1, end-1);
}

void reverseArraySinglePointer(int arr2[], int n, int start){
    if(start >= n /2) return;

    swap(arr2[start], arr2[n-start-1]);
    reverseArraySinglePointer(arr2, n, start + 1);

}

int main(){
    int n = 5;
    int arr[] = {2, 5, 4, 1, 3};
    int arr2[] = {5, 2, 1, 3, 4};

    // Two pointer way -
    reverseArray(arr, 0, n-1);

    // One Pointer way
    reverseArraySinglePointer(arr2, n, 0);
    
    
    for(auto it: arr) cout << it << " ";
    
    for(auto it: arr2) cout << it << " ";
}