#include<bits/stdc++.h>
using namespace std;

// :--> Brute force approach


// vector < vector < int >> rotate(vector < vector < int >> & matrix) {
//     int n = matrix.size();
//     vector < vector < int >> rotated(n, vector < int > (n,0));
//     for (int i = 0; i < n; i++) {
//     for (int j = 0; j < n; j++) {
//         rotated[j][n - i - 1] = matrix[i][j];
//     }
//     }
//     return rotated;
        // Time complexity = O(n^2) and space complexity is O(n^2).
// }


/// Optimal Approach.
// vector<vector<int>> rotate(vector<vector<int>> & matrix){
//     int n = matrix.size();
//     // Transpose
//     for(int i=0;i<n-1;i++){
//         for(int j = i+1;j<n;j++){
//             swap(matrix[i][j],matrix[j][i]);
//         }
//     }

//     // Reverse
//     for(int i=0;i<n;i++){
//         reverse(matrix[i].begin(),matrix[i].end());
//     }
// }

// int main() {
//     // vector < vector < int >> arr;
//     // arr =  {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     // vector < vector < int >> rotated = rotate(arr);
//     // cout << "Rotated Image" << endl;
//     // for (int i = 0; i < rotated.size(); i++) {
//     // for (int j = 0; j < rotated[0].size(); j++) {
//     //     cout << rotated[i][j] << " ";
//     // }
//     // cout << "\n";
//     // }
//     int n;
//     cout<<"The size of matrix is : ";
//     cin>>n;
//     vector<vector<int>> matrix(n,vector<int>(n));
//     cout<<"Enter the elements of matrix: ";
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>> matrix[i][j];
//         }
//     }
//     vector<vector<int>> ans = rotate(matrix);
//     for(auto it: ans){
//         for( auto ele : it){
//             cout<< ele<<" ";
//         }
//         cout<<endl;
//     }
    

// }



void rotate(vector < vector < int >> & matrix) {
    int n = matrix.size();
    //transposing the matrix
    for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
        swap(matrix[i][j], matrix[j][i]);
    }
    }
    //reversing each row of the matrix
    for (int i = 0; i < n; i++) {
    reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main() {
    vector < vector < int >> arr;
    arr =  {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rotate(arr);
    cout << "Rotated Image" << endl;
    for (int i = 0; i < arr.size(); i++) {
    for (int j = 0; j < arr[0].size(); j++) {
        cout << arr[i][j] << " ";
    }
    cout << "\n";
    }

}


