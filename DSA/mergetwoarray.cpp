#include<bits/stdc++.h>


using namespace std;

int main() {
    int n, m;
    
    cout<<"enter n:";
    cin>>n;
    cout<<endl;
    cout<<"enter m:";
    cin>>m;
    cout<<endl;

    vector<int> arr1(n);
    vector<int> arr2(m);

    
    cout<<" first array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    cout<<endl;
    cout<<"second array: ";
   
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }
    cout<<endl;
    cout<<"merge array: ";
    
    vector<int> merged(n + m);
    
  
    for (int i = 0; i < n; i++) {
        merged[i] = arr1[i];
    }
    
    
    for (int i = 0; i < m; i++) {
        merged[n + i] = arr2[i];
    }


    for (int i = 0; i < n + m; i++) {
        cout << merged[i] << " ";
    }

    return 0;
}
