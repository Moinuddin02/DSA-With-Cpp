#include <iostream>
using namespace std;

int main(){
   /* int a;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    

    if (a>0)
    {
        cout<<"The value of a is positive"<<endl;
    }
    else
    {
        cout<<"The value of a is negative"<<endl;
    }
    

   if (a>0)
   {
    cout<<"The value of a is positve"<<endl;
   }
   else if (a<0)
   {
    cout<<"The value of a is negative"<<endl;
   }
   else
   {
    cout<<"The value of a is zero :( "<<endl;
   } */


   char ch;
   cout<<"Enter any character"<<endl;
   cin>>ch;

   if (ch>=65 && ch<=90)
   {
    cout<<"This is upper case"<<endl;
   }
   else if (ch>=97 && ch<=122)
   {
    cout<<"This is lower case"<<endl;
   }
   else if(ch>=48 && ch <=57)
   {
    cout<<"You entered digit"<<endl;
   }
   else{
    cout<<"You enter special character"<<endl;
   }
   
   
    return 0;
}