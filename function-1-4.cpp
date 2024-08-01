# include <iostream>

void print_scaled(int array[3][3],int scale){

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            array[i][j] = array[i][j] * scale;
        }
    }

    for (int k = 0; k < 3; k++){
        for (int l = 0; l < 3; l++){

            std:: cout << array[k][l] << " ";

            if (l == 2){
                std:: cout << "\n";
            }
        }
    }

    std:: cout << std:: endl;
}