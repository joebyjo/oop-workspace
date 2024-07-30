#include <iostream>
using namespace std;

extern string transform(int num, int base);

int main(void) {

    string x = transform(75,2);

    cout << x << endl;


    return 0;
}