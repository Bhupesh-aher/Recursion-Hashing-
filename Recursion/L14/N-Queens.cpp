#include<bits/stdc++.h>
using namespace std;

// bool isSafe(int row, int col, vector<string> &board, int n){
//     int dupRow = row;
//     int dupCol = col;

//     // check upper diagonal
//     while(row >= 0 && col >= 0){
//         if(board[row][col] == 'Q') return false;
//         row --;
//         col --;
//     }

//     // check row 
//     row = dupRow;
//     col = dupCol;
//     while(col >= 0){
//         if(board[row][col] == 'Q') return false;
//         col--;
//     }

//     // check lower diagonal
//     row = dupRow;
//     col = dupCol;
//     while(row < n && col >= 0){
//         if(board[row][col] == 'Q') return false;
//         row ++;
//         col --;
//     }

//     return true;

// }

// void solve(int col, vector<vector<string>> &ans, vector<string> &board, int n){
//     if(col == n){
//         ans.push_back(board);
//         return;
//     }

//     for(int row = 0; row<n; row++){
//         if(isSafe(row, col, board, n)){
//             board[row][col] = 'Q';
//             solve(col + 1, ans, board, n);
//             board[row][col] = '.';
//         }
//     }
// }
// TC - O(n! * n) 
// SC - O(N^2) 

// int main(){
//     int n = 4;
//     vector<vector<string>> ans;
//     vector<string> board(n); 
//     string s(n, '.');
//     for(int i = 0; i<n; i++){
//         board[i] = s;
//     }

//     solve(0, ans, board, n);
    
//     for(auto it: ans){
//         for(auto ele: it){
//             cout << ele << " ";
//         }
//         cout << endl;
//     }

// }



// above solution is good but to find upper lower same row in isSafe function it will take O(3N) 
// so this is not the efficient way to find the upper lower diagonal and row. instead of that use hashing to check these things

void solve(int col, vector<vector<string>> &ans, vector<string> &board, int n, vector<int> &leftRow, vector<int> &upperDiagonal, vector<int> &lowerDiagonal){
    if(col == n){
        ans.push_back(board);
        return;
    }

    for(int row = 0; row<n; row++){
        if(leftRow[row] == 0 && lowerDiagonal[row + col] == 0 && upperDiagonal[n - 1 + col - row] == 0){
            board[row][col] = 'Q';
            leftRow[row] = 1;
            lowerDiagonal[row + col] = 1;
            upperDiagonal[n-1 + col - row] = 1;
            solve(col + 1, ans, board, n, leftRow, upperDiagonal, lowerDiagonal);
            board[row][col] = '.';
            leftRow[row] = 0;
            lowerDiagonal[row + col] = 0;
            upperDiagonal[n-1 + col - row] = 0;
        }
    }
}

// TC - O(n! * n) 
// SC - O(n)

int main(){
    int n = 4;
    vector<vector<string>> ans;
    vector<string> board(n); 
    string s(n, '.');
    for(int i = 0; i<n; i++){
        board[i] = s;
    }

    vector<int> leftRow(n, 0), upperDiagonal(2 * n - 1, 0), lowerDiagonal(2 * n  - 1, 0);

    solve(0, ans, board, n, leftRow, upperDiagonal, lowerDiagonal);
    
    for(auto it: ans){
        for(auto ele: it){
            cout << ele << " ";
        }
        cout << endl;
    }

}