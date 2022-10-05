#include<stdio.h>

int LinearSearch( int arr[],int n,int x)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr1[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int x=5; //element to be searched
    int n=sizeof(arr1)/sizeof(arr1[0]);
    printf("%d",LinearSearch(arr1,n,x));
    return 0;
}
