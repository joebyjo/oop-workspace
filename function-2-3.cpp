#include <iostream>
using namespace std;



void two_five_nine(int array[], int n) {

    int two =0, five=0, nine=0;


    for (int i=1; i<n; i++){
        switch (array[i]) {
            case 2:
                two++;
            case 5:
                five++;
            case 9:
                nine++;
        };
    }

    cout << "2:" << two << ";5:" << five << ";9:" << nine << ";\n";

}