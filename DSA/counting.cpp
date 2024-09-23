#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i] == -1)
        continue;
        int c=1;
        for(int j = i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
            c++;
            arr[j] = -1;
            }
        }
        cout<<arr[i]<<" occurs "<<c<<" times "<<endl;
    }
}