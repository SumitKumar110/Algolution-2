#include<stdio.h>

int largestElement(int a[], int size, int k)
{
	int count = 1;
	
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			if(a[i]<a[j])
			{
				count++;		
			}	
		}
		
		if(count == k)
		return a[i];
		
		else
		count = 1;
	}
	
	return -1;		
}

int main()
{
	int a[] = {3,2,1,6,5,4};
	int n = sizeof(a)/sizeof(a[0]);
	int k = 2;
	printf("The largest element is at %d position is %d",k,largestElement(a,n,k));
}
