#include<bits/stdc++.h>
using namespace std;
vector<int> spiralmatrix(vector<vector<int>> &mat){
    vector<int> ans;
    int n = mat.size();
    int m = mat[0].size();
    int top = 0;
    int left = 0;
    int right = m-1;
    int bottom = n-1;
    while(top<=bottom && left<=right ){
        for(int i = left;i<=right;i++){
            ans.push_back(mat[top][i]);
        }
        top++;
        for(int i=top;i<=bottom;i++){
            ans.push_back(mat[i][right]);
        }
        right--;
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                ans.push_back(mat[bottom][i]);
            }
            bottom--;
        }
        if(left<=right){
            for(int i = bottom;i>=top;i--){
                ans.push_back(mat[i][left]);
            }
            left++;
        }
    }
    return ans;
}
int main(){
    int n;
    int m;
    cout<<"The number of rows are: ";
    cin>>n;
    cout<<endl<<"The number of column are: ";
    cin>>m;
    vector<vector<int>> matrix(n,vector<int>(m));
    for(int i = 0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Enter a num: ";
            cin>>matrix[i][j];     
                 
        }
    }
    vector<int> spiral = spiralmatrix(matrix);
    int x = spiral.size();
    for(int i=0;i<x;i++){
        cout<<spiral[i]<<" ";
    }
    return 0;
}
//  Time Complexity: O(m x n) and space complexity is O(n).