#include <iostream>
#include <iomanip>
using namespace std;

int * findAverageScore();
int main() {
    int n; // # of judges also size of array
    int j; // contestants number
    int temp;

    cout << "Number of Judges: ";
    cin  >> n;
    cin.ignore(5,'\n');


    int *x = new int[n];
    cin  >> j; // Contestants number
    cin.ignore(5,' ');


    for(int i = 0; i<= n-1; i++)
    {

        if(i <= n-1) // i <= 4
        {
            cout << "i: " << i << endl;
            cin >> temp;
            cin.ignore(1,' ');
            x[i] = temp;
        }
    }

    for(int i = 0; i<= n-1; i++)
    {
        cout << x[i] << endl;
    }

    return 0;
}

