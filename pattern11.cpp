// #include <iostream>
// using namespace std;
// void print1(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for (int i = 1; i < n; i++)
//     {
//         for (int j = 1; j < n-i+1; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

// }
// int main()
// {
//     int testcases;
//     cin >> testcases;
//     for (int i = 0; i < testcases; i++)
//     {
//         int n;
//         cin >> n;
//         print1(n);
//     }

//     return 0;
// } // These program is commbination of the two programs, So below we write a new logic about this...
#include <iostream>
using namespace std;
void print1(int n)
{
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
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
}
