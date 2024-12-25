#include<bits/stdc++.h>
using namespace std;
//brute Approach
// vector<int> PrintLeader(int a[],int n){
//     vector<int> ans;
   
//     for(int i=0;i<n;i++){
//         bool leader = true;
//         for(int j = i+1;j<n;j++){
//             if(a[j]>a[i]){
//                 leader = false;
        //         break;
        //     }
        // }
        // if(leader){
        //     ans.push_back(a[i]);
        // }
//     }
//     return ans;
// }
// int main(){
//     int n;
//     cout<<"The size of array is: ";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     vector<int> ans = PrintLeader(arr,n);
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// Optimal Approach





vector<int> printLeaders(int arr[], int n) {

  vector<int> ans;
  
 // Last element of an array is always a leader,
 // push into ans array.
 int max = arr[n - 1];
 ans.push_back(arr[n-1]);

  // Start checking from the end whether a number is greater
  // than max no. from right, hence leader.
  for (int i = n - 2; i >= 0; i--)
    if (arr[i] > max) {
      ans.push_back(arr[i]);
      max = arr[i];
    }

  
  return ans;
}

int main() {
    
  // Array Initialization.
  int n = 6;
  int arr[n] = {10, 22, 12, 3, 0, 6};

  vector<int> ans = printLeaders(arr,n);
  
  
  for(int i = ans.size()-1;i>=0;i--){
      
      cout<<ans[i]<<" ";
  }
  
  cout<<endl;
  return 0;
}

