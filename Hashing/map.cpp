#include<bits/stdc++.h>
using namespace std;


// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i<n; i++){
//         cin >> arr[i];
//     }

//     map<int, int> mpp;

//     // pre-compute
//     for(int i = 0; i<n; i++){
//         mpp[arr[i]] ++;
//     }

//     // iterate in the map
//     // for(auto it: mpp){
//     //     cout << it.first << "->" << it.second << endl;
//     // }

//     int q; 
//     cin >> q;
//     while(q--){
//         int number;
//         cin >> number;

//         cout << number << " - " << mpp[number] << endl;
//     }
// }



int main(){
    int n;
    cin >> n;
    int arr[n];
    map<int, int> mpp;

    // pre-compute can be done while taking the input as well, It doesn't matter. it will save your one for loop but that is okay that won't change anything or that won't make your code super fast

    for(int i = 0; i<n; i++){
        cin >> arr[i];
        mpp[arr[i]] ++;
    }

    



    int q; 
    cin >> q;
    while(q--){
        int number;
        cin >> number;

        cout << number << " - " << mpp[number] << endl;
    }
}















// 7               - size of array
// 1 2 3 1 3 2 12       - array elements
// 5               - total numbers for which i need to find count of them in array
// 1               - how many time 1 is there in array
// 2               - how many time 4 is there in array
// 3               - how many time 2 is there in array
// 4               - how many time 3 is there in array
// 12              - how many time 12 is there in array