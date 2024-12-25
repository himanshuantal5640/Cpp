// You are using GCC
#include<bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int data1){
        data = data1;
        left = NULL;
        right = NULL;
    }
};
TreeNode* construct(vector<int>& arr,int start,int end){
    if(start>end){
        return NULL;
    }
    int mid = (start+end)/2;
    TreeNode* root = new TreeNode(arr[mid]);
    root->left = construct(arr,start,mid-1);
    root->right = construct(arr,mid+1,end);
    return root;
}
void inorder(TreeNode* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    int n;
    cout<<"enter: ";
    cin>>n;
    cout<<endl;
    vector<int> arr(n);
    cout<<"enter array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    TreeNode* root = construct(arr,0,n-1);
    cout<<"Inorder traversal: ";
    inorder(root);
    return 0;
    
}