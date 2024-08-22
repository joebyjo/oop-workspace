#include "StoreShelf.h"

StoreShelf:: StoreShelf(){
    max_width=0;
    current_num=0;
    current_width=0;
    shelf=nullptr;
};

StoreShelf:: StoreShelf(int width){
    max_width=width;
    current_num=0;
    current_width=0;
    shelf= new MusicBox[width]; // assuming that min width of a musicbox can be 1cm, we allocate `width` amount of memory
};

int StoreShelf::get_num_music_boxes(){
    return this->current_num;
};

int StoreShelf::get_width(){
    return this->current_width;
};

MusicBox* StoreShelf:: get_contents(){
    return this->shelf;
};

bool StoreShelf:: add_music_box(MusicBox a_music_box){

    if ((this->current_width+a_music_box.get_width()) <= this->max_width ) {
        shelf[current_num] = a_music_box;
        current_num++;
        current_width+= a_music_box.get_width();
        return true;}

    return false;
};

StoreShelf:: ~StoreShelf(){
    delete[] this->shelf;
};