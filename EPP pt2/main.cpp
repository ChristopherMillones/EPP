#include <iostream>
#include <fstream>

using namespace std;

void printWelcome();
void printMenu();
int main() {

    string directory = "C:\\Users\\Chris\\Desktop\\EPP\\EPP pt2\\textSave.txt";
    ifstream inFile;
    string test;
    char choice;

    inFile.open(directory);
    if(!inFile.is_open())
    {
        cerr << "File is NOT open" << endl;
    }

    while(!inFile.eof())
    {
        getline(inFile, test);
    }

    printWelcome();
    printMenu();
    cout << "Please enter a command!:";
    cin.get(choice);
    cin.ignore(10000,'\n');


    switch(toupper(choice))
    {
        case 'N':break;
        case 'F':break;
        case 'A':break;
        case 'Q':break;
        default: cout << "deafult";

    }

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