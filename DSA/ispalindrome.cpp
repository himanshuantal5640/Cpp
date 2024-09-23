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
bool ispalindrome(Node* head){
    if(head == nullptr || head->next==nullptr){
        return true;
    }
    Node* temp = head;
    stack<int> st;
    while(temp != nullptr){
        st.push(temp->data);
        temp = temp->next;
    }
    temp = head;
    while(temp != nullptr){
        if(temp->data != st.top()){
            return false;
        }
        st.pop();
        temp = temp->next;
    }
    if(st.empty()){
        return true;
    }
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
    vector<int> arr = {1,2,3,2,1};
   
    Node* head = constructLL(arr);
    bool is_palindrome = ispalindrome(head);
    cout << (is_palindrome ? "The list is a palindrome." : "The list is not a palindrome.") << endl;
  

    return 0;
}