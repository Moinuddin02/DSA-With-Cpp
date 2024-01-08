#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the value of a " << endl;
    cin >> a;
    cout << "Enter thr value of b " << endl;
    cin >> b;

    char ch;
    cout << "Enter the operation which do you want to perform " << endl;
    cin >> ch;

    switch (ch)
    {
    case '+':
        cout << (a + b) << endl;
        break;
    case '-':
        cout << (a - b) << endl;
        break;
    case '%':
        cout << (a % b) << endl;
    case '*':
        cout << (a * b) << endl;
        break;

    default:
        cout << "Please enter a valid expression " << endl;
        break;
    }

    return 0;
}