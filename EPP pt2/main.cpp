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

    inFile.open(directory);
    if(!inFile.is_open())
    {
        cerr << "File is NOT open" << endl;
    }


    printWelcome();
    printMenu();
    cout << "Please enter a command!:";
    cin.get(choice);
    cin.ignore(10000,'\n');

    do{
        switch(toupper(choice))
        {
            case 'N':cout << "You choose N\n";
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