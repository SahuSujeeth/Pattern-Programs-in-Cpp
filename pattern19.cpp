#include <iostream>
using namespace std;
void print1(int n)
{
    int intialSpace = 0;
    for (int i = 0; i < n; i++)
    {
        // stars
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        // spaces
        for (int j = 0; j < intialSpace; j++)
        {
            cout << " ";
        }

        // stars
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
        intialSpace += 2;
    }
    intialSpace = 8;
    for (int i = 1; i <= n; i++)
    {
        // stars
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        // spaces
        for (int j = 0; j < intialSpace; j++)
        {
            cout << " ";
        }

        // stars
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
        intialSpace -= 2;
    }
}
int main()
{
    int testcases;
    cin >> testcases;
    for (int i = 0; i < testcases; i++)
    {
        int n;
        cin >> n;
        print1(n);
    }

    return 0;
}