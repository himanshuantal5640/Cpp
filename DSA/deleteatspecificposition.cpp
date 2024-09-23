#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
    Node(int val) : data(val), next(nullptr) ,prev(nullptr){} // Constructor to initialize data and next pointer
};

Node* constructLL(vector<int>& arr) {
    if (arr.empty()) return nullptr; // Handle case for empty array

    Node* head = new Node(arr[0]);
    Node* temp = head;

    for (int i = 1; i < arr.size(); i++) {
        Node* mover = new Node(arr[i]);
        temp->next = mover;
        temp = mover;
    }
    return head;
}
Node* removehead(Node* head){
    if(head == nullptr){
        return head;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
    
}
Node* removetail(Node* head){
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}
Node* removeatindex(Node* head,int k){
    Node* temp = head;
    if(k==1){
      return  removehead(head);
    }
    
    int cnt = 0;
    while(temp != NULL){
        cnt++;
        if(cnt== k-1){
            break;
        }
        temp= temp->next;
    }
    Node* node = temp->next;
    temp->next = temp->next->next;
    delete node;
    return head;
}
void print(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}



int main() {
    vector<int> arr = {2, 3, 4, 5, 9};
    Node* head = constructLL(arr);
    head = removeatindex(head,2);
    print(head);
    return 0;
}
