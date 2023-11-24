#include<stdio.h>
int main()
{
	int array[1000],count,i,j;
	printf("enter the number elements of the array: ");
	scanf("%d",&count);
	printf("enter the elements: ");
	for(i=0;i<count;i++)
	{
	    scanf("%d",&array[i]);
	}
	printf("the array is : \n");
	for(j =0;j<count;j++)
	{
	    printf("%d ",array[j]);
	}
	return 0;
}

