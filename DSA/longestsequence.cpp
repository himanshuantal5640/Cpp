#include<bits/stdc++.h>
using namespace std;
//Brute Force Approach
// bool linearsearch(vector<int> &A,int num){
//     int n = A.size();
//     for(int i=0;i<n;i++){
//         if(A[i]==num){
//             return true;
//         }
//     }
//     return false;
// }
// int longestconsecutivesequence(vector<int> &A){
//     int n = A.size();
//     int longest = 1;
//     for(int i=0;i<n;i++){
//         int x = A[i];
//         int count = 1;
//         while(linearsearch(A,x+1)==true){
//             x+=1;
//             count+=1;
//         }
//         longest = max(longest,count);
//     }
//     return longest;
// }
// int main(){
    // int n;
    // cout<<"The size of array is: ";
    // cin>>n;
    // int arr[n];
    // for(int i = 0;i<n;i++){
    //     cin>>arr[i];
    // }
    // int ans = longestconsecutivesequence(arr)
//      vector<int> a = {100, 200, 1, 2, 3, 4};
//     int ans = longestconsecutivesequence(a);
//     cout << "The longest consecutive sequence is " << ans << "\n";
//     return 0;
// }

// Better Approach
// int longestconsecutivesequence(vector<int> A){
//     int n = A.size();
//     if(n==0){
//         return 0;
//     }
//     sort(A.begin(),A.end());
//     int lastsmaller = INT16_MIN;
//     int count = 0;
//     int longest = 1;
//     for(int i=0;i<n;i++){
//         if(A[i] - 1 == lastsmaller){
//             count +=1;
//             lastsmaller += 1;
//         }
//         else if(A[i] != lastsmaller){
//             count = 1;
//             lastsmaller = A[i];
//         }
//         longest = max(longest,count);
//     }
//     return longest;
// }
// int main(){
//      vector<int> a = {100, 200, 1, 2, 3, 4};
//     int ans = longestconsecutivesequence(a);
//     cout << "The longest consecutive sequence is " << ans << "\n";
//     return 0;
// }


// Optimal Approach
int longestconsecutivesequence(vector<int> A){
    int n = A.size();
    if(n==0){
        return 0;
    }
    int longest = 1;
    unordered_set<int> st;
    for(int i =0;i<n;i++){
        st.insert(A[i]);
    }
    for(auto it : st){
        if(st.find(it-1)== st.end()){
            int count = 1;
            int x = it;
            while(st.find(x+1)!= st.end()){
                x = x+1;
                count = count +1;

            }
            longest = max(longest,count);

        }
    }
    return longest;
    
}
int main(){
     vector<int> a = {100, 200, 1, 2, 3, 4};
    int ans = longestconsecutivesequence(a);
    cout << "The longest consecutive sequence is " << ans << "\n";
    return 0;
}
// Time complexity = O(3n) and Space complexity = O(n);
