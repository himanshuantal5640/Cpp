#include<iostream>
using namespace std;
int fun1(int a[],int n){
    int mini = a[0];
    int maxprofit = 0;
    for(int i = 1;i<n;i++){
        int cost = a[i] - mini;
        maxprofit = max(maxprofit,cost);
        mini = min(mini,a[i]);
    }
    return maxprofit;
}
int main(){
    int x;
    cout<< "The size of array is: ";
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    int profit = fun1(arr,x);
    cout<<"The maximun profit is: "<<profit;
    return 0;

}