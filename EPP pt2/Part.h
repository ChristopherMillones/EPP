//
// Created by Chris on 1/17/2020.
//

#ifndef EPP_PT2_PART_H
#define EPP_PT2_PART_H
#include <iostream>

using namespace std;

class Part {
public:
    Part();

    ~Part(){}


    void setpartid(int id);
    void setdescription(string description);
    void setprice(float price);
    void setinventory(int inventory);

    int getpartid();
    string getdescription();
    float getprice();
    int getinventory();


private:
    int partId;
    string description;
    float price;
    int inventory;
};

Part::Part() {

    partId = 0;
    description = "";
    price = 0.00;
    inventory = 0;
}

Part::~Part() {
}

void Part::setdescription(string description) {
    this->description = description;
}

void Part::setinventory(int inventory) {
    this->inventory = inventory;
}

void Part::setpartid(int id) {
    partId = id;
}

void Part::setprice(float price) {
    this->price = price;
}

int Part::getpartid() {
    return this->partId;
}

string Part::getdescription() {
    return this->description
}

float Part::getprice() {
    return this->price
}

int Part::getinventory() {
    return this->inventory
}







#endif //EPP_PT2_PART_H
