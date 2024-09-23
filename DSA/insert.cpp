#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data1) {
        data = data1;
        next = NULL;
    }
};
int length(Node* head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}
void insert(Node*& head, int val, int pos) {
    Node* newnode = new Node(val);
    if (pos < 0 || pos > length(head)) {
        cout << "Invalid position" << endl;
        return;
    }
    if (pos == 0) { // Insert at beginning
        newnode->next = head;
        head = newnode;
    } else {
        Node* temp = head;
        for (int i = 0; i < pos - 1; i++) {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;

    }
}



void print(Node* head) {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

}

int main() {
    Node* head = NULL;
    int n;
    cout << "size of LL: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int y;
        cout << "Element: ";
        cin >> y;
        insert(head, y, 0); // Insert at the beginning
    }
    print(head);

    // Insert at other positions as needed
    // insert(head, 100, 3); // Insert after the 3rd element
    // insert(head, 200, 0); // Insert at the beginning
     insert(head, 300, length(head)); // Insert at the end

    print(head);
}