// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// Better Approach
// int main(){
//     int n;
//     cout<<"The size of array is: ";
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     next_permutation(a,a+3);
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
// }
// Optimal Approach
#include<bits/stdc++.h>
using namespace std;
vector<int> NextGreaterPermutation(vector<int> A){
    int n = A.size();
    int index = -1;
    for(int i = n-2;i>=0;i--){
        if(A[i]<A[i+1]){
            index = i;
            break;
        }

    }
    if(index == -1){
        reverse(A.begin(),A.end());
    }
    for(int i = n-1;i>index;i--){
        if(A[i]>A[index]){
            swap(A[i],A[index]);
        }
    }
    reverse(A.begin() + index + 1,A.end());
    return A;
}
int main(){
    vector<int> A = {2, 1, 5, 4, 3, 0, 0};
    vector<int> ans = NextGreaterPermutation(A);

    cout << "The next permutation is: [";
    for (auto it : ans) {
        cout << it << " ";
    }
    cout << "]n";
    return 0;
}
// Time complexity = O(3N)  and Space complexity is O(1).