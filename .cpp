#include <iostream>
using namespace std;

int main()
{
    int i, n;
    int *p; //allocated address variable
    i=rand() % 40;
    cout << "\n\tHow many numbers in Randomly? "<<i;
    p = new int[i];
    if (p == nullptr)//Error Handling.
        cout << "\n\tError: memory could not be allocated";
    else
    {
        for (n = 0; n < i; n++)
        {
            p[n]=rand() % 50;
            cout << "\n\tEnter number " << n << ": "<<p[n];
        }
        cout << "\n\tYou have entered: ";
        for (n = 0; n < i; n++)
            cout << p[n] << ", ";
        delete[] p; //Delete array pointed to by p
    }
    return 0;
}
