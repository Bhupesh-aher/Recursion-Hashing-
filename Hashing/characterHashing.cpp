#include<bits/stdc++.h>
using namespace std;



// Case 1 - only lowercase letters
// int main(){
//     string s;
//     cin >> s;
    
//     // pre compute
//     int hash[26] = {0};
//     for(int i = 0; i<s.size(); i++){
//         hash[s[i] - 'a'] ++;
//     }

//     int q;
//     cin >> q;
//     while(q--){
//         char c;
//         cin >> c;
//         // fetch
//         cout << c << " - " << hash[c - 'a'] << endl;
//     }
    
// }

// Input 
// for both case 1 and case 2 

// abcdabehf   - input string
// 5           - total numbers of charcter we need to find the count for
// a           - total number of apperance of 'a' letter 
// g           - total number of apperance of 'g' letter
// h           - total number of apperance of 'h' letter
// b           - total number of apperance of 'b' letter
// c           - total number of apperance of 'c' letter




// Case 2 -  lowercase letters and uppercase letters as well 
int main(){
    string s;
    cin >> s;
    
    // pre compute
    int hash[256] = {0};
    for(int i = 0; i<s.size(); i++){
        hash[s[i]] ++;
    }

    int q;
    cin >> q;
    while(q--){
        char c;
        cin >> c;
        // fetch
        cout << c << " - " << hash[c] << endl;
    }
    
}