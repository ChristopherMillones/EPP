#include <iostream>
#include <iomanip>
using namespace std;

int * findAverageScore();
int main() {
    int n; // # of judges also size of array
    int j; // contestants number
    int temp;
    string t;

    cout << "Number of Judges: ";
    getline(cin, t);

    int *x = new int[n];
    cin  >> j; // Contestants number
    cin.ignore(1000, '\n');


    for(int i = 0; i<= n; i++)
    {
        cin >> temp;
        cin.ignore(1000, '\n');
        cin.ignore();
        x[i] = temp;
    }






    return 0;
}

