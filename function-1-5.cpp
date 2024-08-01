#include <iostream>

void print_summed(int array1[3][3],int array2[3][3]){

    int new_array[3][3];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){

            new_array[i][j] = array1[i][j] + array2[i][j];
        }
    }

    for (int k = 0; k < 3; k++){
        for (int l = 0; l < 3; l++){

            std:: cout << new_array[k][l] << " ";

            if (l == 2){
                std:: cout << "\n";
            }
        }
    }

}