#include "Orchestra.h"
#include "Musician.h"

Orchestra:: Orchestra() {
    this->size=0;
}

Orchestra:: Orchestra(int size) {
    this->size=size;
    Musician* array = new Musician[size];
}

int Orchestra::get_current_number_of_members() {
    return this->current_size;
};

bool Orchestra::has_instrument(std::string instrument) {
    for (int i=0; i<current_size; i++) {
        if (this->array[i].get_instrument()==instrument) {
            return true;
        }
    }

    return false;
};

Musician* Orchestra::get_members() {
    return this->array;
};

bool Orchestra::add_musician(Musician new_musician) {

    if (~(this->current_size==this->size)) {
        this->array[this->current_size] = new_musician;

        return true;
    }

    else { return false;}


};

Orchestra:: ~Orchestra() {
    delete[] this->array;
}