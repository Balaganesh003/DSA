#include<stdio.h>

// List has to be sorted before using binary search 

int BinarySearch( int arr[],int x, int low,int high)
{
    int mid;
    while( low <= high){
       mid = (low + high)/2;
    if (x == arr[mid])
        return mid;
    else if (x > arr[mid]) // x is on the right side
        low = mid + 1;

    else                  // x is on the left side
        high = mid - 1;
    }
    return -1; // x is not in the array
}
int main()
{
    int arr1[]={1,2,3,4,5,6,7,8,9,10};
    int x=5; // element to find
    int low=0; 
    int high=9;  // size of array -1
    printf("%d",BinarySearch(arr1,x,low,high));
    return 0;
}
