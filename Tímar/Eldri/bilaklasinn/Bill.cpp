// Bill.cpp
#include "Bill.h"

Bill::Bill() {
    this->id = -1;
    this->tegund = "";
    this->litur = "";
}

Bill::Bill(int id) {
    this->id = id;
    this->tegund = "";
    this->litur = "";
}

Bill::Bill(int id, std::string tegund, std::string litur) {
    this->id = id;
    this->tegund = tegund;
    this->litur = litur;
}

int Bill::getId() {
    return this->id;
}

void Bill::setId(int id) {
    this->id = id;
}

std::string Bill::getTegund() {
    return this->tegund;
}

void Bill::setTegund(std::string tegund) {
    this->tegund = tegund;
}

std::string Bill::getLitur() {
    return this->litur;
}

void Bill::setLitur(std::string litur) {
    this->litur = litur;
}

void Bill::prenta() {
    std::cout << "ID: " << this->id << ", tegund: " << this->tegund 
              << ", litur: " << this->litur << std::endl;
}

std::string Bill::toString() {
    return "ID: " + std::to_string(this->id) + ", tegund: " + this->tegund +
           ", litur: " + this->litur;
}
