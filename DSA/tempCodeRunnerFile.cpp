int main() {
    vector<int> arr = {1,2,3,2,1};
    Node* head = constructLL(arr);
    bool x = ispalindrome(head);
    cout<<(x?"the list palindron" : "the list is not palindrome")<<end;;
    return 0;
}