#include<bits/stdc++.h>
using namespace std;
class Node{
   public:
    int data;
    Node* next;
    Node(int data1){
        data = data1;
        next = NULL;
    }
};
void insert(Node* head,int x){
    Node* newnode = new Node(x);
    newnode->next = head;
    head = newnode;
}
void append(Node* head,int x){
    Node* temp = head;
    if(head==nullptr){
        Node* temp = new Node(x);
        head = temp;
        return;
    }
    while(temp->next!= NULL){
        temp = temp->next;
    }
    Node* newnode = new Node(x);
    temp->next = newnode;
    newnode->next = NULL;
}
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    Node* head = NULL;
    int n;
    cout<<"enter: ";
    cin>>n;
    int val;
    int val1;
    for(int i =0;i<n;i++){
        int val1;
        cin>>val1;
        insert(head,val1);
    }
    cout<<"current linked list: ";
    print(head);
    cin>>val;
    append(head,val);
    cout<<"updated linked list: ";
    print(head);

}