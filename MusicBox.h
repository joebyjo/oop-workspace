#ifndef MUSICBOX_H
#define MUSICBOX_H

#include <string>
using namespace std;

class MusicBox {
    private:
        int width;
        string songname;
    public:
        MusicBox();
        MusicBox(std::string songname, int width);
        string get_song();
        int get_width();
        ~MusicBox();
};

#endif