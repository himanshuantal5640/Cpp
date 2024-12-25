#include<bits/stdc++.h>
using namespace std;
// Brute force approach:-
// void markrows(vector<vector<int>> &matrix, int n,int m ,int i){
//     for(int j =0;j<m;j++){
//         if(matrix[i][j] != 0){
//             matrix[i][j] = -1;
//         }
//     }
// }
// void markcol(vector<vector<int>> &matrix, int n, int m, int j){
//     for(int i=0;i<n;i++){
//         if(matrix[i][j] != 0){
//             matrix[i][j] = -1;
//         }
//     }
// }
// vector<vector<int>> zeromatrix(vector<vector<int>> &matrix, int n, int m){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(matrix[i][j]==0){
//                 markrows(matrix,n,m,i);
//                 markcol(matrix,n,m,j);
//             }
//         }
//     }
//     for(int i = 0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(matrix[i][j] == -1){
//                 matrix[i][j] = 0;
//             }
//         }
//     }
//     return matrix;
//      Time complexity is O((N*M)*(N + M)) + O(N*M) and Space complexity is O(1)
// }


//  Better Approach:-
// vector<vector<int>> zeromatrix(vector<vector<int>> &matrix,int n,int m){
//     int row[n] = {0};
//     int col[m] = {0};
//     for(int i =0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(matrix[i][j]==0){
//                 row[i] = 1;
//                 col[j] = 1;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(row[i] == 1 || col[j] == 1){
//                 matrix[i][j] = 0;
//             }
//         }
//     }
//     return matrix;   
            // Time complexity is O(2*(n*m) and space complexity is O(n) + O(m)
// }


// // Optimal Approach
// vector<vector<int>> zeromatrix(vector<vector<int>> &matrix,int n, int m){
//     int col0 = 1;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(matrix[i][j] == 0){
//                 matrix[i][0] = 0;
//                 if(j!=0){
//                     matrix[0][j] = 0;
//                 }
//                 else{
//                     col0 = 0;
//                 }
//             }
//         }
//     }
//     for(int i=1;i<n;i++){
//         for(int j = 1;j<m;j++){
//             if(matrix[i][j] != 0){
//                 if(matrix[i][0] == 0 || matrix[0][j] == 0){
//                     matrix[i][j] = 0;
//                 }
//             }
//         }
//     }
//     //step 3: Finally mark the 1st col & then 1st row:
//     if (matrix[0][0] == 0) {
//         for (int j = 0; j < m; j++) {
//             matrix[0][j] = 0;
//         }
//     }
//     if (col0 == 0) {
//         for (int i = 0; i < n; i++) {
//             matrix[i][0] = 0;
//         }
//     }

//     return matrix;
//     // Time complexity = O(2*(n*m)) and space complexity = O(1);
// }
int main(){
    int n;
    int m;
    cout<<"The number of rows and column in a matrix are: "<<endl;
    cin>>n>>m;
    vector<vector<int>> matrix(n,vector<int>(m));
    cout<<"Enter the elements of matrix:";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>> matrix[i][j];
        }
    }
    vector<vector<int>> ans = zeromatrix(matrix,n,m);
    for(auto it: ans){
        for(auto ele: it){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    return 0;
}