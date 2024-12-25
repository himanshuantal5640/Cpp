#include<bits/stdc++.h>
using namespace std;

// Book class to store details of each book
class Book {
    private:
        string title;
        string author;
        int year;
    public:
        // Setter function to set book details
        void set(string t, string a, int y) {
            title = t;
            author = a;
            year = y;
        }

        // Function to display the book information
        void display(int s) {
            cout << "Book " << s << ":" << endl;
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Publication Year: " << year << endl;
        }
};

int main() {
    int n;
    cout << "Enter the number of books: ";
    cin >> n;  // Input the total number of books
      // Clear the newline character from buffer after inputting 'n'

    Book books[50];  // Array to store book objects, constraint says max is 50

    // Loop to input details of each book
    for (int i = 0; i < n; ++i) {
        string title, author;
        int year;

        // Input book details
        cout << "Enter title of book " << i+1 << ": ";
        cin>>title;
        cout << "Enter author of book " << i+1 << ": ";
        cin>>author;
        cout << "Enter publication year of book " << i+1 << ": ";
        cin >> year;
        // Clear newline character after reading 'year'

        // Set the details to the corresponding book object in the array
        books[i].set(title, author, year);
    }

    // Display book information
    cout << "Book Information:" << endl;
    for (int i = 0; i < n; ++i) {
        books[i].display(i + 1);  // Display each book's information
    }

    return 0;
}
