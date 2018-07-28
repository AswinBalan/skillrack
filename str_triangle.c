#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int n,i,j,iter=0,var=0;
	char a[1000];
	//gets(a);
	scanf("%d %[^\n]s",&n,a);
	
	for(i=0;i<=strlen(a);i++)
	{
		//iter = 0;
		if(a[i]==' ' || a[i]=='\0')
		{
			for(j=(i-n);j<i;j++)
			{

				printf("%c",a[j]);
			}
			if(var < iter)
			{
                 printf(" ");
                 //printf(" %d enter if ",iter);
                 var++;
			}
			else
			{
			  var = 0;
			  iter ++;
			  if(i!= strlen(a))
			       printf("\n");
			       //printf(" enter else ");
		    }
		}
	}
	if(var != 0)
	{
		do
		{
			for(i=0;i<n;i++)
			    printf("*");
			printf(" ");
			var ++;
		}while(var <=iter);
		//printf("%d  %d\n",var,iter);
	}
	//puts(a);
	return(0);
}//hello hi how are you
 //2
 /*
 lo
 hi ow
 re ou **
 */
