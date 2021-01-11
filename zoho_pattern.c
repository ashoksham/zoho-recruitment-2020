#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter a number of rows\n");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		for(j=n;j>i;j--)
			printf("%d",j);
		for(j=i;j>0;j--)
			printf("%d",i);
		printf("\n");
	}

}
