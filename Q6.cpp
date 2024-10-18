#include<stdio.h>

bool sumPair(int a[],int size,int sum)
{	
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if((a[i] + a[j]) == sum)
			return 1;
		}
	}
	
	return 0;
}

int main()
{
	int a[] = {1,2,4,5,7,11};
	int n = sizeof(a)/sizeof(a[0]);
	int x = 11;
	
	printf("%d",sumPair(a,n,x));
}
