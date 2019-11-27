#include <stdexcept>
#include <iostream>
#include "IntegerList.h"

using namespace std;

int main() {

    IntegerList mylist;
    int sum = 0;

    mylist.addFront(4);
    mylist.addFront(8);
    mylist.addFront(5);
    mylist.addFront(2);

    mylist.AddAtPosition(6,2);
    mylist.print(); // Top = head, Bottom = tail
    cout << "\nMy Sum: " << mylist.sum(mylist, sum) << endl;
}