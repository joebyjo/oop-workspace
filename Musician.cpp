#include "Musician.h"

Musician::Musician() {
    experience = 0;
    instrument = "null";
}

Musician::Musician(std::string instrument, int experience) {
    this->experience=experience;
    this->instrument=instrument;
}

std::string Musician::get_instrument() {
    return this->instrument;
}

int Musician::get_experience() {
    return this->experience;
}
