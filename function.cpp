// #include <iostream>
// using namespace std;

// int power(int a, int b)
// {
//     int ans = 1;
//     for (int i = 1; i <=b; i++)
//     {
//         ans = ans * a;
//     }
//     return ans;
// }

// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     int answer = power(a, b);
//     cout << "Anwser is " << answer << endl;
//     return 0;
// }


#include <iostream>
using namespace std;


bool iseven(int num)
{
    if (num & 1)
    {
        return 0;
    }
    return 1;
    
}


int main(){
    
    int num;
    cin>>num;

    if (iseven(num))
    {
        cout<<"Number is even"<<endl;
    }
    else
    {
        cout<<"Number is odd" <<endl;
    }
    
    

    return 0;
}


