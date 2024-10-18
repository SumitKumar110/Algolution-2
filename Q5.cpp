#include<stdio.h>

int sumArray(int a[],int l,int u)
{
	int sum = 0;
	
	for(int i=l;i<=u;i++)
	{
		sum = sum + a[i];
	}
	
	return sum;
}

int equiIndex(int *a,int size)
{
	for(int i=0;i<size;i++)
	{
		if(sumArray(a,0,i-1) == sumArray(a,i+1,size-1))
		return i+1;
	}
	
	return -1;
}

int main()
{
	int a[] = {1,3,5,2,2};
	int n = sizeof(a)/sizeof(a[0]);
	
	printf("The equilibrium index of the array is %d",equiIndex(a,n));
	
	return 0;
}
