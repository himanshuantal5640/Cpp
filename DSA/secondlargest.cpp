#include<iostream>
using namespace std;
// secondlargest element
// int seclar(int a[], int n){
//     int lar = INT16_MIN;
//     int sec = INT16_MAX;
//     for(int i=0;i<n;i++){
//         if(a[i]>lar){
//             sec = lar ;
//             lar = a[i];
//         }
//         else if(a[i]>sec && a[i] != lar){
//             sec = a[i];
//         }
//     }
//     return sec;

// }
// second smallest element
int secsmall(int a[],int n){
    int small = INT16_MAX;
    int ssmall = INT16_MAX;
    for(int i = 0;i<n;i++){
        if(a[i]<small){
            ssmall = small;
            small = a[i];
        }
        else if(a[i]<ssmall && a[i] != small){
            a[i] = ssmall;
        }
        
    }
    return ssmall;
}
int main(){
    int x;
    cout<<"The size of array is: ";
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
   // int seclargest = seclar(arr,x);
    // cout<<"The second largest element is: "<<seclargest<<endl;
    int Ssecsmall = secsmall(arr,x);
     cout<<"The second smallest element is: "<<Ssecsmall<<endl;
    return 0; 
}