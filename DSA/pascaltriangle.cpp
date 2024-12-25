#include<bits/stdc++.h>
using namespace std;
// Variation 1:-> print the element at given row and column.
// int nCr(int row, int col){
//     long long ans = 1;
//     for(int i = 0;i<col;i++){
//         ans = ans*(row - i);
//         ans = ans/(i+1);

//     }
//     return ans; 
// }
// int pascaltriangle(int row, int col){
//     int element =  nCr(row-1,col-1);
//     return element;
//     // Time complexity is O(col) and Space complexity is O(1).
// }
//int main(){
//     int Row;
//     int col;
//     cout<<"The row is: ";
//     cin>>Row;
//     cout<<endl<<"the column is: ";
//     cin>>col;
//     int element = pascaltriangle(Row,col);
//     cout<< "the element is: "<<element;
//     return 0;

// }

// Variation  2:-> Given the row number n. Print the n-th row of Pascal’s triangle.
// int nCr(int row, int col){
//     long long ans = 1;
//     for(int i=0;i<col;i++){
//         ans = ans*(row - i);
//         ans = ans/(i+1);
//     }
//     return ans;
// }
// void pascaltriangle(int n){
//     for(int c = 1;c<=n;c++){  // c= column.
//         cout<< nCr(n-1,c-1)<<" ";
//     }
//     cout<<"\n";
//     //Time complexity is O(row*col) and space colmplexity is O(1).
// }
// int main(){
//    int n;
//    cout<<"The row number is: ";
//    cin>>n;
//    pascaltriangle(n);
//    return 0;

// }
// optimal approach of variation 2


// void pascalTriangle(int n) {
//     long long ans = 1;
//     cout << ans << " "; // printing 1st element

//     //Printing the rest of the part:
//     for (int i = 1; i < n; i++) {
//         ans = ans * (n - i);
//         ans = ans / i;
//         cout << ans << " ";
//     }
//     cout << endl;
//     // Time Complexity: O(N)  and Space Complexity: O(1).
// }

// int main()
// {
//     int n = 5;
//     pascalTriangle(n);
//     return 0;
// }

//  Variation 3:->  Given the number of rows n. Print the first n rows of Pascal’s triangle.
    // brute approach

// int nCr(int row, int col){
//     long long res = 1;
//     for(int i=0;i<col;col++){
//         res = res*(row - i);
//         res = res/(i+1);
//     }
//     return (int)(res);
// }
// vector<vector<int>> PascalTriangle(int n){
//     vector<vector<int>> ans;
//     for(int row = 1;row<=n;row++){//--> rows
//         vector<int> templist;
//         for(int col = 1;col<=row;col++){  //--> columns
//             templist.push_back(nCr(row-1,col-1));
//         }
//         ans.push_back(templist);
//     }
//     return ans;
//     // Time Complexity: O(n*n*r) ~ O(n3)
//     // Space Complexity:  O(1)
// }
// int main(){
//     int n;
//     cout<<"Enter row no: ";
//     cin>>n;
//     vector<vector<int>> ans  = PascalTriangle(n);
//     for(auto it:ans){
//         for(auto ele:it){
//             cout<<ele<<" ";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

//variation 3 optimal approach



vector<int> generateRow(int row) {
    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1); //inserting the 1st element

    //calculate the rest of the elements:
    for (int col = 1; col < row; col++) {
        ans = ans * (row - col);
        ans = ans / col;
        ansRow.push_back(ans);
    }
    return ansRow;
}

vector<vector<int>> pascalTriangle(int n) {
    vector<vector<int>> ans;

    //store the entire pascal's triangle:
    for (int row = 1; row <= n; row++) {
        ans.push_back(generateRow(row));
    }
    return ans;
}

int main()
{
    int n = 5;
    vector<vector<int>> ans = pascalTriangle(n);
    for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << "\n";
    }
    return 0;
}
