#include <stdexcept>
#include <iostream>
#include "IntegerListt.h"

using namespace std;

int main() {

    IntegerListt mylist;

    mylist.addFront(4);
    mylist.addFront(8);
    mylist.addFront(5);
    mylist.addFront(2);

    mylist.AddAtPosition(6,2);

    mylist.print(); // Top = head, Bottom = tail
}