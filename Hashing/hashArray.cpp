#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    // pre compute 
    int hash[13] = {0};
    for(int i = 0; i<n; i++){
        hash[arr[i]] ++;
    }


    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        // fetch no.of time number apperas
        cout << number << " - " <<  hash[number] << endl;
    }

}



// Input 

// 5               - size of array
// 1 3 2 1 3       - array elements
// 5               - total numbers for which i need to find count of them in array
// 1               - how many time 1 is there in array
// 4               - how many time 4 is there in array
// 2               - how many time 2 is there in array
// 3               - how many time 3 is there in array
// 12              - how many time 12 is there in array