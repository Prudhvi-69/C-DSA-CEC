#include<stdio.h>
void main()
{
	int rows,cols;
	scanf("%d%d",&rows,&cols);
	int i,j,var=65;
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=cols;j++)
		{
			printf("%c ",var++);
		}
		printf("\n");
	}
/*
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
*/	
	
	
}
