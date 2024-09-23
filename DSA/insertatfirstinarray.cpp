#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size: ";
    cin>>n;
    cout<<endl;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    
    int m;
    cin>>m;
    int pos;
    cin>>pos;
    for(int i=n;i>pos;i--){
        arr[i] = arr[i-1];
    }
    arr[pos] = m;
    n++;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
     for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }
    n++;
    int x;
    cin>>x;
    arr[n-1] = x;
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}