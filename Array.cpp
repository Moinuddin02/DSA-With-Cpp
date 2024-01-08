#include <iostream>
using namespace std;

void Array(int arr[],int size)
{
    cout<<"Printing the array"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }

    cout<<"Printing Done"<<endl;
    
}

int main(){
    // int number[5]={1,2,3,4,5};
    // cout<<"Value at second index is "<<number[4]<<endl;
    int first[5]={1,2,3,4,5};
    int n=2;
    Array(first,2);
    int second[10]={1,2,3,4,5,6,7,8};
     n=7;
     Array(second,7);
    int third[10]={1,1,3,4,4,4,3};
     n=14;
    Array(third,14);
    return 0;
}