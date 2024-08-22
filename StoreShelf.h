#ifndef STORESHELF_H
#define STORESHELF_H

#include <string>
#include "MusicBox.h"
using namespace std;

class StoreShelf {
    private:
        int max_width;
        int current_num;
        int current_width;
        MusicBox* shelf;

    public:
        StoreShelf();
        StoreShelf(int width);
        int get_num_music_boxes(); 
        int get_width();
        MusicBox *get_contents();
        bool add_music_box(MusicBox a_music_box);
        ~StoreShelf();
};

#endif