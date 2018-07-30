#include<stdio.h>
int main()
{
	int i,j,n,inc=1;
	scanf("%d",&n);
	for(i=0;i<3;i++)
	{
		for(j=0;j<(2*n)+1;j++)
		{
			if(j%2 ==0 || i != 1)
				printf("*");
			else if (i==1)
				printf("%d",inc++);
		}
		printf("\n");
	}
	return (0);
}