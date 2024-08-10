#include<bits/stdc++.h>
using namespace std;
// Brute Force Approach:->
// int findallsubarray(vector<int> &arr, int k){
//     int n = arr.size();
//     int cnt = 0;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             int sum = 0;
//             for(int m = i;m<=j;m++){
//                 sum += arr[m];
//             }
//             if(sum == k){
//                 cnt++;
//             }
//         }
//     }
//     return cnt;
//     // Time complexity is O(n^3) and Space complexity is O(1).
// }


// Better Approach:->
//  int findallsubarray(vector<int> &arr, int k){
//     int n = arr.size();
//     int cnt = 0;
//     for(int i=0;i<n;i++){
//         int sum = 0;
//         for(int j=i;j<n;j++){
            
            
//              sum += arr[j];
            
//             if(sum == k){
//                 cnt++;
//             }
//         }
//     }
//     return cnt;
//     // Time complexity is O(n^2) and Space complexity is O(1).
// }

// Optimal Approach:->
int findallsubarray(vector<int> &arr,int k){
    map<int,int> mpp;
    int n = arr.size();
    int presum = 0;
    mpp[0] = 1;
    int cnt = 0;
    for(int i = 0;i<n;i++){
        presum += arr[i];
        int remove =  presum - k;
        cnt+= mpp[remove];
        mpp[presum]+=1;
    }
    return cnt;
    // Time complexity is O(n) and space complexity is O(n).
    // if we use unordered map then time complexity is O(n * log(n)),
}
int main(){
    int K;
    cout<<"The sum needs to find is: ";
    cin>>K;
    cout<<endl;
    vector<int> A;
    int n;
    cout<<"The size of array is: ";
    cin>>n;
    cout<<endl;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        A.push_back(m);
    }
    int ans = findallsubarray(A,K);
    cout<<"The number count with sum K is: "<<ans<<endl;
    return 0;

}
