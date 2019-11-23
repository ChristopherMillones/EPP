#include <stdexcept>
#include <iostream>
#include "IntegerListt.h"

using namespace std;

int main() {

    IntegerListt mylist;

    for (int i = 0; i < 5; i++) {
        mylist.addFront(i);
    }
    mylist.AddAtPosition(1,7);

    mylist.print();
}