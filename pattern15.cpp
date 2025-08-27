#include <iostream>
using namespace std;
void print1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for(char ch='A';ch <= 'A'+(n-i-1);ch++)
        {
            cout << ch << " ";
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

    return 0;
}