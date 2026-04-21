#include <iostream>
using namespace std;

int element[10];
int nLenght;
int x;

void input() {
    cout << "Enter the number of elements: ";
    cin >> nLenght;
    if (nLenght <= 10) 
    {
       break;
    }
    else {
        cout << "Please enter a number less than or equal to 10." << endl;
    }
}

