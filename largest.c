#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000],tmp;
	int i,j,k,b[100],n,inc;
	scanf("%s",a);
	//to form maximum largest number by swapping indices
	//1 2 4 5 7 8 9 10 11 20 25 44 45
	//a="699731787022457192428222653599464501803523986";
	scanf("%d",&n);
	printf("%d",strlen(a));
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i< n;i++)
	{
		inc = 0;
		if(b[i] !=1)
		 {
		 //printf("%c   %c\n",a[b[i]-1],a[b[i]-2]);
             if(a[b[i]-1]>a[b[i]-2])
             {  printf("1st loop %c   %c\n",a[b[i]-2],a[b[i]-1]);
                tmp = a[b[i]-1];
                a[b[i]-1]=a[b[i]-2];
                a[b[i]-2]=tmp;  
                inc ++;
             }
         }
  
             if(b[i]< strlen(a) &&(inc ==0 )) 
            {
             if(a[b[i]-1]<a[b[i]])
            {
        	printf("2nd loop %c   %c\n",a[b[i]-1],a[b[i]]);
        	tmp = a[b[i]-1];
        	a[b[i]-1] =a[b[i]];
        	a[b[i]]= tmp;
             }
            }
    } 
	printf("%s",a);
	return (0);
}