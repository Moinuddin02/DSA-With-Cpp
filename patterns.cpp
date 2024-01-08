#include <iostream>
using namespace std;

int main()
{
    /* int n;
     cin >> n;

     int i = 1; // For rows
     while (i <= n)
     {
         int j = 1; // for column
         while (j <= n)
         {

             cout << i;
             j = j + 1;
         }
         cout << endl;
         i = i + 1;
     }*/
    // Ans

    // 1111
    // 2222
    // 3333
    // 4444

    /* int n;
    cin >> n;

    int i = 1; // For rows
    int count = 1;

    while (i <= n)
    {
        int j = 1; // for column
        while (j <= i)
        {
            cout << count << " ";

            count = count + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }*/

    // Ans
    //  1
    //  2 3
    //  4 5 6
    //  7 8 9 10

    /* { int n;
      cin >> n;

      int row = 1; // For rows

      while (row <= n)
      {
          int col = 1; // for column
          while (col <= row)
          {
              cout << row;
              col = col + 1;
          }
          cout << endl;
          row = row + 1;
      }
     }*/
    // Ans
    //  1
    //  22
    //  333
    //  4444

    /* {
        int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        int value = row;
        while (col <= row)
        {
            cout << value;
            value = value + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
    }*/

    // Ans
    //  1
    //  23
    //  345
    //  4567

    /* int n;
     cin >> n;

     int row = 1;
     while (row <= n)
     {
         int col = 1;

         while (col <= row)
         {
             cout << (row - col + 1);
             col = col + 1;
         }
         cout << endl;
         row = row + 1;
     }*/

    // Ans
    // 1
    // 21
    // 321
    // 4321

    /* int n;
     cin>>n;

     int row=1;
     while (row<=n)
     {
         int col=1;

         while (col<=n)
         {
         char ch = 'A'+row-1;
         cout<<ch;
         col=col+1;

         }
         cout<<endl;
         row = row+1;
     }*/

    // Ans
    // AAAAA
    // BBBBB
    // CCCCC
    // DDDDD
    // EEEEE

    /*  int n;
      cin >> n;

      int row = 1;
      while (row <= n)
      {
          int col = 1;
          while (col <= n)
          {
              char ch = 'A' + col - 1;
              cout << ch;
              col = col + 1;
          }
          cout << endl;
          row = row + 1;
      }*/

    // Ans
    // ABCDE
    // ABCDE
    // ABCDE
    // ABCDE
    // ABCDE

    /*int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {

        int col = 1;
        while (col <= n)
        {
            char value = 'A'+row+col-2;
            cout << value;
            value = value + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }*/

    //  ABC
    // BCD
    // CDE

    /*  int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {

        int col = 1;
        while (col <= row)
        {
            char value = 'A'+row+col-2;
            cout << value;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }*/

    /* int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {

        int col = 1;
        char start = 'A' + n - row;
        while (col <= row)
        {

            cout << start;
            start = start + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }*/
    // Ans
    // D
    // CD
    // BCD
    // ABCD
    // int n;
    // cin>>n;
    // for (int row = 1; row <  n; row ++)
    // {
    //     char ch = 'A'+n-row;
    //     for (int col = 1; col <  row; col++)
    //     {
    //         cout<<"ch";
    //         ch=ch++;
    //     }
    //     cout<<endl;

    // }



    int n;
    cin>>n;
    int row=1;
    while (row<=n)
    {
        int space=n-row;
        while (space)
        {
            cout<<" ";
            space=space-1;
        }
        
        int col=1;
        while (col<=row)
        {
            cout<<"*";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
        
        
    }
    

    return 0;
}