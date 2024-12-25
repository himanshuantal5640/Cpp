#include<iostream>
using namespace std;

int findlar( int a[], int n){
    int max = a[0];
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    return max;
}
int main(){
    int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest = findlar(arr,n);
    cout<<"The largest element is: "<<largest<<endl;
    return 0;
}


