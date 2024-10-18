#include<stdio.h>

int maxProfit(int a[],int size)
{
	int profit = 0;
	
	for(int i = 0;i<size;i++)
	{
		for(int j = i+1;j<size;j++)
		{
			if((a[j] - a[i]) > profit)
			profit = a[j] - a[i];
		}
	}
	
	return profit;
}

int main()
{
	int prices[] = {7,1,5,3,6,4};
	int n = sizeof(prices)/sizeof(prices[0]);
	
	printf("Max profit = %d",maxProfit(prices,n));
}
