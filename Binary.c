#include<stdio.h>
int main()
{
	int n,High,Low,Mid,key;
	printf("Enter no of elements :");
	scanf("%d",&n);
	int Array[n],i;
	printf("Enter Numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&i);
	}
	Low=Array[0];
	High=Array[n];
	Mid=(Low+High)/2;
	printf("Enter Number You Want to Search");
	scanf("%d",&key);
	if(Mid==key)
	{
		printf("Search Is Successful");
	}
}
