#include <iostream>
#include <string>

using namespace std;

string transform(int num, int base) {

    string digits = "0123456789ABCDEF";
    string result = "";

    while (num > 0) {
        int remainder = num % base; 
        result = digits[remainder] + result; 
        num = num / base;
    }

    return result;
}