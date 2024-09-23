#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 5;
    int arr[5] = {1,2,3,4,5};
    for(int i=1;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int index;
    cin>>index;
    cout<<endl;
    for(int i=index;i<n;i++){
        arr[i] = arr[i+1];
    }
    n--;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}