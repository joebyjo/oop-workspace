#include <iostream>
using namespace std;


extern void count_digits(int array[4][4]);

int main() {
    // Example matrix (identity matrix)
    int matrix[4][4] = {
        {1, 2, 0, 0},
        {0, 1, 3, 0},
        {0, 5, 1, 0},
        {0, 0, 0, 1}
    };

    // Call the function and pass the matrix
    count_digits(matrix);

    return 0;
}
