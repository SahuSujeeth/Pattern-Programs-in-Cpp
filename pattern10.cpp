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
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;

        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
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
