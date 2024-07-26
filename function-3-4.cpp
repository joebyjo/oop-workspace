#include <iostream>
using namespace std;

void print_pass_fail(char grade) {
    switch (grade) {
        case 'A':
            cout << "Pass" << std::endl;
            break;
        case 'B':
            cout << "Pass" << std::endl;
            break;
        case 'C':
            cout << "Pass" << std::endl;
            break;
        case 'D':
            cout << "Pass" << std::endl;
            break;
        case 'E':
            cout << "Fail" << std::endl;
            break;
        default:
            cout << "Nothing" << std::endl;
            break;
    }

}