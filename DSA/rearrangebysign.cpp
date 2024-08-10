// when equal number of negative and positive with brute approach.
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
// vector<int> rearrangebysign(vector<int> A, int n){
//     vector<int> pos;
//     vector<int> neg;
//     for(int i =0;i<n;i++){
//         if(A[i]>0){
//             pos.push_back(A[i]);
//         }
//         else{
//             neg.push_back(A[i]);
//         }
//     }
//     for(int i=0;i<n/2;i++){
//         A[2*i] = pos[i];
//         A[2*i + 1] = neg[i];
//     }
//     return A;
// }
// int main(){
//     int x = 4;
//     vector<int> arr = {1,2,-4,-5};
//     vector<int> ans = rearrangebysign(arr,x);
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
// }

// when equal number of negative and positive with optimal approach.
// vector<int> rearrangebysign(vector<int> A){
//     int n = A.size();
//     vector<int> ans(n,0);
//     int posIndex = 0, negIndex = 1;
//     for(int i =0;i<n;i++){
//         if(A[i]>0){
//             ans[posIndex] = A[i];
//             posIndex += 2;
//         }
//         else{
//             ans[negIndex] = A[i];
//             negIndex+=2;
//         }
//     }
//     return ans;
// }
// int main(){
    
//     vector<int> arr = {1,2,-4,-5};
//     vector<int> ans = rearrangebysign(arr);
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
// }


//when unequal number of positive and negative
vector<int> rearrangebysign(vector<int> A, int n){
    vector<int> pos;
    vector<int> neg;
    for(int i =0;i<n;i++){
        if(A[i]>0){
            pos.push_back(A[i]);
        }
        else{
            neg.push_back(A[i]);
        }
    }
    if(pos.size()<neg.size()){
        for(int i=0;i<pos.size();i++){
            A[2*i] = pos[i];
            A[2*i +1] = neg[i];
        }
        int index = pos.size() *2;
        for(int i = pos.size();i<neg.size();i++){
            A[index] = neg[i];
            index++;
        }
    }
    else{
        for(int i=0;i<neg.size();i++){
            A[2*i] = pos[i];
            A[2*i +1] = neg[i];
        }
        int index = neg.size() *2;
        for(int i = neg.size();i<pos.size();i++){
            A[index] = pos[i];
            index++;
        }
    }
    return A;
}
int main(){
    int x = 6;
    vector<int> arr = {1,2,-3,-4,5,6};
    vector<int> ans = rearrangebysign(arr,x);
    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}

