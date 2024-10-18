#include<stdio.h>

int sumElements(int a[],int size,int number)
{
	int sum1 = 0,sum2 = 0, k;
	
	for(int i=0;i<size;i++)
	{
		k = i;
		
		while((k<(i+number)) && k<size)
		{
			sum1 = sum1 + a[k];
			k++;	
		}
		
			if(sum1>sum2)
			sum2 = sum1;
			sum1 = 0;
	}
	
	return sum2;
}

int main()
{
	int a[] = {100,200,300,400};
	int n = sizeof(a)/sizeof(a[0]);
	
	printf("The max sum is : %d",sumElements(a,n,2));
}
