#include <stdio.h>

int countInversion(int a[],int size)
{
    int count = 0;

    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(a[i]>a[j])
            count++;
        }
    }

    return count;

}

int main()
{
    int arr[] = {7,2,6,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("The number of inversions in the array is %d",countInversion(arr,n));
}
