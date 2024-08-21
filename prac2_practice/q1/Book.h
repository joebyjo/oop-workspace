#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;


class Book {

    private:
        string title;
        string author;
        string isbn;

    public:
        Book();
        Book(string title, string author, string isbn);
        string get_title();
        string get_author();
        string get_isbn();

};
#endif
