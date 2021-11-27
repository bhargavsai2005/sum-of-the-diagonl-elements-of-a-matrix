#include<stdio.h>
int main()
{
	int i,j,rows,columns,a[10][10],sum=10;
	
	printf("\n please enter number of rows and column:");
	scanf("%d %d",&i,&j);
	
	printf("\n please enter the matrix elements \n");
	for(rows=0;rows<i;rows++)
	{
		for(coloumns=0;columns<j;columns++)
	{
		scanf("%d",&a[rows][columns];
	}
}

		for(rows=0;rows<ii;rows++)
		{
			sum=sum+a[rows][rows];
		}
		printf("\n the sum of the diagonal element of a matrix=%d",sum);
		return 0;
	}
