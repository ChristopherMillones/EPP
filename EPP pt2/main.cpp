#include <iostream>
#include <fstream>
#include "Part.h"
using namespace std;

void printWelcome();
void printMenu();
int main() {

    string directory = "C:\\Users\\Chris\\Desktop\\EPP\\EPP pt2\\textSave.txt";
    ifstream inFile;
    char choice;

    //Item properties
    int partId;
    string description;
    float price;
    int inventory;
    Part stock;


    inFile.open(directory);
    if(!inFile.is_open())
    {
        cerr << "File is NOT open" << endl;
    }


    printWelcome();

    do{
        printMenu();
        cout << "Please enter a command!:";
        cin.get(choice);
        cin.ignore(10000,'\n');
        switch(toupper(choice))
        {
            case 'N':
                 cout << "\nEnter Part Id:";
                 cin  >> partId;
                 cin.ignore(10000, '\n');
                 cout << "Enter Short Item Description:";
                 getline(cin, description);
                 cout << "Enter Price:";
                 cin  >> price;
                 cin.ignore(10000, '\n');
                 cout << "Enter number of products in inventory:";
                 cin  >> inventory;
                 cin.ignore(10000, '\n');
                 stock.insertNode(partId, description, price, inventory);
                 break;

            case 'F':cout << "You choose F\n";
                break;
            case 'A':cout << "You choose A\n";
                break;
            case 'Q':cout << "You choose Q\n";
                break;
            default: cout << "Invalid Character";

        }
    }while(toupper(choice) != 'Q');
    stock.print();

    return 0;
}

void printWelcome()
{
    cout << "******************************************\n"
         << "****** WELCOME TO THE INVETORY MENU ******\n"
         << "******************************************\n";
}

void printMenu()
{
    cout <<"Enter new part to the system (N)\n"
         <<"Find particular part (F)\n"
         <<"Archive Information (A)\n"
         <<"Quit (Q)\n";
}