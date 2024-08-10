// #include<iostream>
// using namespace std;
// bool Issorted(int a[],int n){
//     for(int i = 0;i<n;i++){
//         for(int j = i+1;j<n;j++){
//             if(a[j]<a[i]){
//                 return false;
//             }
//         }
//     }
//     return true;
// }
// int main(){
//     int x;
//     cout<<"The size of array: ";
//     cin>>x;
//     int arr[x];
//     for(int i = 0;i<x;i++){
//         cin>>arr[i];
//     }
//     bool ans = Issorted(arr,x);
//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

// bool isSorted(int arr[], int n) {
//   for (int i = 0; i < n; i++) {
//     for (int j = i + 1; j < n; j++) {
//       if (arr[j] < arr[i])
//         return false;
//     }
//   }

//   return true;
// }

// int main() {

//   int arr[] = {1, 2, 3, 4, 5}, n = 5;
//   bool ans = isSorted(arr, n);
//   if (ans) cout << "True" << endl;
//   else cout << "False" << endl;
//   return 0;
// }

// Optimal Approach for better time complexity
bool issorted(int a[],int n){
    for(int i = 1;i<n;i++){
        if(a[i]<a[i-1]){
            return false;

        }
    }
    return true;
}
// int main(){
//     int n ;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     bool ans = issorted(arr,n);
//     cout<<ans;
// }
int main() {

  int arr[] = {1, 2, 3, 4, 5}, n = 5;

  printf("%s", issorted(arr, n) ? "True" : "False");

}
