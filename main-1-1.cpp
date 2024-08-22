#include <iostream>
#include "MusicBox.h"

using namespace std;

int main() {
    MusicBox m1;
    cout << "Name: " << m1.get_song() << ", Width: " << m1.get_width() << endl;

    MusicBox m2("ABCXYZ", 100);
    cout << "Name: " << m2.get_song() << ", Width: " << m2.get_width() << endl;

    return 0;
}

