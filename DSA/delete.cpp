#include<bits/stdc++.h>
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data1){
        data = data1;
        left = nullptr;
        right = nullptr;
    }
};
Node* deleteNode(Node*root,int data){
    if(root == nullptr){
        return root;
    }
    if(data > root->data){
        root->right = deleteNode(root->right,data);
    }
    else if(data < root->data){
        root->left = deleteNode(root->left,data);
    }
    else{
        if(root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        else if(root->left == NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else{
            Node* temp = root->right;
            while(temp->left != NULL){
                temp = temp->left;
            }
            root->data = temp->data;
            root->right = deleteNode(root->right,temp->data);
           
        }

    }
    return root;
}
void bfs(int start,vector<vector<int>> &adj,vector<int> &visited){
    queue<int> q;
    q.push(start);
    visited[start] = true;
    while(!q.empty()){
        int s = q.front();
        q.pop();
        cout<<s<<" ";
        for(auto it:adj[start]){
            if(!visited[it]){
                q.push(it);
                visited[it] = true;
            }
        }
    }
}
void dfs(int start,vector<vector<int>> &adj,vector<int> &visited){
    visited[start] = true;
    cout<<start<<" ";
    for(auto it: adj[start]){
        if(!visited[it]){
            dfs(it,adj,visited);
        }
    }
}
void merge(vector<int> &arr,int left,int mid,int right){
    int n1 = mid - left +1;
    int n2 = right - mid;
    vector<int> arr1(n1);
    vector<int> arr2(n2);
    for(int i=0;i<n1;i++){
        arr1[i] = arr[left + i];
    }
    for(int j=0;j<n2;j++){
        arr2[j] = arr[mid + 1 + j];
    }
    int i = 0,j=0,k=left;
    while(i<n1 && j<n2){
        if(arr1[i] < arr2[j]){
            arr[k] = arr1[i];
            i++;
        }
        else{
            arr[k] = arr2[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k] = arr1[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = arr2[j];
        j++;
        k++;
    }
}
void mergesort(vector<int> &arr,int left,int right){
    if(left < right){
        int mid  = (left + right)/2;
        mergesort(arr,left,mid);
        mergesort(arr,mid + 1,right);
        merge(arr,left,mid,right);
    }
}
