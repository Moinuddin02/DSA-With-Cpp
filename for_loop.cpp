#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << "Printing the vlaue from 1 to n " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
}

    // int n;
    // cout<<"Enter the value of n "<<endl;
    // cin>>n;
    // int sum=0;
    // for (int i = 1; i <=n; i++)
    // {
    //     sum=sum+i;

    //    sum+=i;
    // }
    // cout<<"sum is "<<sum<<endl;

    // Fibonacci series
    /*int n;
    cin>>n;
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for (int i = 0; i <= n; i++)
    {
        int sum=a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
    }*/

    // Check prime number using for lopp
    // int n;
    // cout << "Enter a number " << endl;
    // cin >> n;
    // for (int i = 2; i <= n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         cout << "Not prime :-( " << endl;
    //         break;
    //     }
    //     else
    //     {
    //         cout << "Prime number :)" << endl;
    //         break;
    //     }
    // }

    return 0;
}