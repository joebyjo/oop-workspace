#include <iostream>
#include "Book.h"

int main() {
    // Test default constructor
    Book defaultBook;
    std::cout << "Default Book: " << defaultBook.get_title() << ", " << defaultBook.get_author() << ", " << defaultBook.get_isbn() << std::endl;

    // Test parameterized constructor
    Book specificBook("The Great Gatsby", "F. Scott Fitzgerald", "9780743273565");
    std::cout << "Specific Book: " << specificBook.get_title() << ", " << specificBook.get_author() << ", " << specificBook.get_isbn() << std::endl;

    return 0;
}
