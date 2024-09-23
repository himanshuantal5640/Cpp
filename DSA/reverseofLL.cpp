#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {} // Constructor to initialize data and next pointer
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
Node* reverseLL(Node* head){
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL){
        Node* front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }
    return prev;
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
    head = reverseLL(head);
    print(head);
    return 0;
}