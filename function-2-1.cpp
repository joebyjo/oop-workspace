#include <iostream>
#include <string>

using namespace std;

void print_binary_str(std::string decimal_number){

    int num =stoi(decimal_number), base = 2;

    string digits = "0123456789ABCDEF";
    string result = "";

    while (num > 0) { 
        int remainder = num % base;
        result = digits[remainder] + result; 
        num = num / base;
    }

    cout << result << endl;

}