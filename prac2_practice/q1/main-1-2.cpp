#include <iostream>
#include "Library.h"
#include "Book.h"

int main() {
    Library myLibrary(3, "City Library");

    // Test adding books to the library
    Book book1("1984", "George Orwell", "9780451524935");
    Book book2("To Kill a Mockingbird", "Harper Lee", "9780061120084");
    Book book3("Moby Dick", "Herman Melville", "9781503280786");
    Book book4("War and Peace", "Leo Tolstoy", "9781400079988");

    std::cout << "Adding 1984: " << (myLibrary.add_book(book1) ? "Success" : "Failed") << std::endl;
    std::cout << "Adding To Kill a Mockingbird: " << (myLibrary.add_book(book2) ? "Success" : "Failed") << std::endl;
    std::cout << "Adding Moby Dick: " << (myLibrary.add_book(book3) ? "Success" : "Failed") << std::endl;
    std::cout << "Adding War and Peace: " << (myLibrary.add_book(book4) ? "Success" : "Failed") << std::endl; // Should fail

    // Display library information
    std::cout << "Library Name: " << myLibrary.get_name() << std::endl;
    std::cout << "Current Number of Books: " << myLibrary.get_current_number_of_books() << std::endl;

    return 0;
}
