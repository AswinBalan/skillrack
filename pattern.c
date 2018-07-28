#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	int i,j,n;
	char name[10];
    scanf("%s",name);
    n = strlen(name);
    for(i=0;i<n;i++)
    {
    	printf("%*.*s",i+1,i+1,name);
    	printf("%*.*s\n",(n+n)-i,i+1,name);  
    	//getting vaules at runtime printf("%*.*,width,precision,string (or)number")
    }
    for(i=n-1;i>=0;i--)
    {
    	printf("%*.*s",i,i,name);
    	printf("%*.*s\n",(n+n)-(i-1),i,name);
    }
	return (0);
}


//output
/*
aswin
a         a
as       as
asw     asw
aswi   aswi
aswin aswin
aswi   aswi
asw     asw
as       as
a         a
*/