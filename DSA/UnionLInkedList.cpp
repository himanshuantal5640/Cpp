#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};

Node* createnode(int data){
    Node* newnode = new Node();
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}
void sortedinsert(Node* &head,Node* newnode){
     if(head == NULL || newnode->data < (head->data)){
     newnode->next = head;
     head = newnode;
    }
     Node* temp = head;
     while(temp->next != NULL && temp->next->data < newnode->data){
     temp = temp->next;
     }
     newnode->next = temp->next;   
    temp->next = newnode;
}
bool isexit(Node* head,int data){
     Node* temp = head;
     while(temp != NULL){
        if(temp->data == data){
        return true;
        }
     temp = temp->next; 
    }       
     return false;
}
Node* makeunion(Node* head1,Node* head2){
     Node* result = NULL;
     Node* temp1 = head1;
     while(temp1 != NULL){
         if(!(isexit(result,temp1->data))){
             Node* newnode = createnode(temp1->data);
                 sortedinsert(result,newnode);
         }
        temp1 = temp1->next;
     }
     Node* temp2 = head2;
    while(temp2 != NULL){
     if(!(isexit(result,temp2->data))){
    Node* newnode = createnode(temp2->data);
    sortedinsert(result,newnode);
       }
    temp2 = temp2->next;
     }
     return result;
}
void printlist(Node* head){
        Node* temp = head;
         while(temp != NULL){
    cout<<temp->data<<" ";
   temp = temp->next;
     }
    cout<<endl;
}
int main(){
    int n;
    cout<<"size of 1:";
    cin>>n;
    Node* head1 = NULL;
    for(int i=0;i<n;i++){
    int val;
     cout<<"ele: ";
     cin>>val;
     Node* newnode = createnode(val);
     sortedinsert(head1,newnode);
     }
     int m;
     cout<<"size of 2:";
     cin>>m;
 Node* head2 = NULL;
     for(int i=0;i<n;i++){
     int val;
     cout<<"ele: ";
     cin>>val;
     Node* newnode = createnode(val);
     sortedinsert(head2,newnode);
    }
    printlist(head1);
    printlist(head2);
    Node* unions = makeunion(head1,head2);
     printlist(unions);
}