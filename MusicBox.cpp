#include "MusicBox.h"

MusicBox:: MusicBox() {
    width=0;
    songname="";
}

MusicBox:: MusicBox(std::string songname, int width){
    this-> width = width;
    this-> songname = songname;
};

string MusicBox:: get_song(){
    return this->songname;
};

int MusicBox::get_width(){
    return this->width;
};

MusicBox:: ~MusicBox(){
    
};




