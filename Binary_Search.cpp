#include <iostream>
using namespace std;

int binarysearch(int arr[], int n, int key)
{

    int start = 0;
    int end = n - 1;
    // int mid = (start + end) / 2;

    // Or
    int mid = start+(end-start)/2;

    while (start <= end)
    {
        if (arr[mid]==key)
        {
          return mid;
        }

        if (key>arr[mid])
        {
            int start= mid+1;
        }
        else
        {
            int end = mid-1;
        }

        mid=start+(end-start)/2;
        
        
    }
    return -1;
}

int main()
{
    int even[6] = {1, 2, 3, 4, 5, 6};
    int index=binarysearch(even,6,3);
    

    
    cout<<"Index of 3 is "<<index<<endl;

    return 0;
}