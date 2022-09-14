#include <stdio.h>

void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void bubbleSort(int arr[], int n)
{
    int i,j,flag=0;
    for(i=0;i<n-1;i++)
    {
        flag=0;
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                flag=1;
            }
        }
        if(flag==0)
            break;
    }
}
int main()
{
    int arr[]={11, 13, 7, 12, 16, 9, 24, 5, 10, 3},n=10,i;
    bubbleSort(arr, n);  // calling bubble sort function
    for(i=0;i<10;i++)
        printf("%d ", arr[i]);
    return 0;
}
