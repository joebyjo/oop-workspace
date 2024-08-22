#include <iostream>
#include "MusicBox.h"
#include "StoreShelf.h"

#include <string>
using namespace std;

int main() {

    StoreShelf shop1(300);
    cout << "Current Width of Shelf: " << shop1.get_width() << endl;

    MusicBox m1("ABC", 100);
    MusicBox m2("DEF", 100);
    MusicBox m3("GHI", 100);
    MusicBox m4("JKL", 100);


    if (shop1.add_music_box(m1)) {
        cout << "Added Song Name: " << m1.get_song() << " Width:" << m1.get_width() << endl;
    } else {
        cout << "Failed to add Song - Name: " << m1.get_song() << " Width:" << m1.get_width() << endl;
    }

    if (shop1.add_music_box(m2)) {
        cout << "Added Song Name: " << m2.get_song() << " Width:" << m2.get_width() << endl;
    } else {
        cout << "Failed to add Song - Name: " << m2.get_song() << " Width:" << m2.get_width() << endl;
    }

    if (shop1.add_music_box(m3)) {
        cout << "Added Song Name: " << m3.get_song() << " Width:" << m3.get_width() << endl;
    } else {
        cout << "Failed to add Song - Name: " << m3.get_song() << " Width:" << m3.get_width() << endl;
    }

    if (shop1.add_music_box(m4)) {
        cout << "Added Song Name: " << m4.get_song() << " Width:" << m4.get_width() << endl;
    } else {
        cout << "Failed to add Song - Name: " << m4.get_song() << " Width:"<< m4.get_width() << endl;
    }

    cout << "Number of Musicboxes: " << shop1.get_num_music_boxes() << endl;

    return 0;
}
