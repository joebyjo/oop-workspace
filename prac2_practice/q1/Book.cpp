
#include "Book.h"

Book:: Book() {
    this->title="";
    this->author="";
    this->isbn="";
};

Book:: Book(string title, string author, string isbn){
    this->title=title;
    this->author=author;
    this->isbn=isbn;
};

string Book::get_title() {
    return this->title;
}

string Book::get_author() {
    return this->author;
}

string Book:: get_isbn() {
    return this->isbn;
}
