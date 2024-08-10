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

