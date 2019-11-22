#include <iostream>
#include <iomanip>
#include <map>
using namespace std;

int findAverageScore(int n, int* x);
void swap(int *xp, int *yp);
void bubbleSort(int arr[], int n);

int main() {
    int n; // # of judges also size of array
    int j; // contestants number
    int temp;
    int contAvg;
    map<int,int> contestants;

    cout << "Number of Judges: ";
    cin  >> n;
    cin.ignore(5,'\n');
    int *x = new int[n];
    cin  >> j; // Contestants number
    cin.ignore(100000,' ');
    cin.ignore(100000,' ');


    while(j > 0)
    {
        for(int i = 0; i<= n-1; i++)
        {
            if(i==n-1)
            {
                cin >> temp;
                cin.ignore(1,'\n');
                x[i] = temp;
            }else{
                cin >> temp;
                cin.ignore(1,' ');
                x[i] = temp;
            }
        }
        contAvg = findAverageScore(n, x);
        cout << "Contestant   " << j << "  " << contAvg << endl;
        contestants.insert(std::pair<int,int>(j,contAvg));

        cin  >> j; // Contestants number
        if(j < 0 )
            break;
        cin.ignore(100000,' ');
        cin.ignore(100000,' ');
    }

    map<int,int>::iterator it = contestants.begin();

    int gValue = 0;
    int winner;
    while(it != contestants.end())
    {
        if(gValue < it->second)
        {
            gValue = it->second;
            winner = it->first;
        }
        it++;
    }

    cout << "Contestant " << winner << " had the score.";

    return 0;
}

int findAverageScore(int n, int* x){

    bubbleSort(x,n);
    int avg =0;
    int*y = new int[n-2];

    for(int i = 0; i<=n-1; i++)
    {
        if(i != 0 && i != n-1)
        {
            y[i-1] = x[i];
        }
    }
    for(int i = 0; i<=n-3; i++)
    {
        avg += y[i];
    }
    return avg/(n-2);
}


// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)

        // Last i elements are already in place
        for (j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
