#ifndef LIBRARY_H
#define LIBRARY_H

#include <string>
#include "Book.h"

class Library {
    private:
        int max_capacity;
        int current_capacity;
        string name;
        Book* array;

    public:
        Library();
        Library(int max_capacity, string name);
        ~Library();
        int get_current_number_of_books();
        string get_name();
        Book* get_books();
        bool add_book(Book new_book);
        


};


#endif