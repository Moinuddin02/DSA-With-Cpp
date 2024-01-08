#include <iostream>
using namespace std;

int main()
{
    // Print even numbers only.

    // int n;
    // cout << "Enter the value of n" << endl;
    // cin >> n;
    // int i = 1;
    // int sum = 2;
    // while (i <= n)
    // {

    //     sum = sum + i;
    //     i = i + 1;
    // }

    // cout << "The value of sum is " << sum << endl;

    int n;

    cin >> n;
    int i = 2;

    while (i <n)
    {
        if (n % i == 0)
        {
            cout << " Not Prime for " << i << endl;
        }
        else
        {
            cout << " prime for " << i << endl;
        }
        i = i + 1;
    }

    return 0;
}