#include <iostream>
#include <string>

using namespace std;

int main() {
    int num =120, base = 2;

    string digits = "0123456789ABCDE";
    string result = "";

    while (num > 0) { 
        int remainder = num % base;
        result = digits[remainder] + result; 
        num = num / base;
    }

    cout << result << endl;
    return 0;
}