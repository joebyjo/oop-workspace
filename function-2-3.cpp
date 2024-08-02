#include <iostream>

using namespace std;

bool is_palindrome (int integers[], int length) {

    if (length <=0 ) {
        return -1;
    }

    int flag = 0;
    for (int i = 0; i <= length / 2 && length != 0; i++) {
 
        if (integers[i] != integers[length - i - 1]) {
            return 0;
        }
    }
    return 1;
}




int sum_array_elements(int integers[], int length) {

    if (length <=0 ) {
        return -1;
    }

    int sum = 0;
    for (int i=0; i<length; i++) {
        sum += integers[i];
    }
    return sum;
}



int sum_if_palindrome (int integers[], int length) {

    if (length <=0 ) {
        return -1;
    }

    int sum = 0;

    if (is_palindrome(integers,length)){
        sum = sum_array_elements(integers,length);
    } else {

        return -2;
    }


    return sum;
};