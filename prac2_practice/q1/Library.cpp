
#include "Library.h"



Library:: Library() {
    max_capacity=0;
    current_capacity=0;
    name="";
    array=nullptr;
};

Library:: Library(int max_capacity, string name) {
    this->max_capacity=max_capacity;
    this->current_capacity=0;
    this->name=name;
    this->array=new Book[max_capacity];
};

Library:: ~Library(){
    delete[] array;
};

int Library:: get_current_number_of_books(){
    return current_capacity;
};

string Library:: get_name(){
    return name;
};

Book* Library:: get_books(){
    return array;
};

bool Library:: add_book(Book new_book) {
    if (current_capacity!=max_capacity) {
        array[current_capacity] = new_book;
        current_capacity++;
        return true;
    }
    return false;
};