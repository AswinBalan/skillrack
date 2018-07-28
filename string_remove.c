#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*void removeChar(char *str, char garbage) {

    char *src, *dst;
    for (src = dst = str; *src != '\0'; src++) {
        *dst = *src;
        if (*dst != garbage) dst++;
    }
    //printf("%c\n",*str);
    *dst = '\0';
}*/
void removeChar(char *str, unsigned int index) {
   char *src;
    for (src = str+index; *src != '\0'; *src = *(src+1),++src) ;
    *src = '\0';
}


int main()
{ 
char s1[100],s2[30];
char* str=malloc(sizeof(int));
int i,j,k;
scanf("%s %s",s1,s2);

//char* str = malloc(strlen(s1)+1);
for(i=0;i<strlen(s2)-1;i++)
{
	for(k=0;k<strlen(s2);k++)
	{
	    if(i==k)
	    	{continue;}
	for(j=0;j<strlen(s1)-1;j++)
	   {
          if((s2[i] == s1[j])  && (s2[k]==s1[j+1])||(s2[k]==s1[j] && s2[i]==s1[j+1]))
          {
          	 //char* str = malloc(strlen(s1)+1);
          	//strcpy(&s1[j+1], &s1[j + 2]);
          	//strcpy(str,s1);
          	//printf("%c\n",s1[j+1]);
          	removeChar(s1,(j+1));
          	//printf("%s\n",str);
          	//strcpy(s1,str);
          }
	   }
    }
}
printf("%s",s1);
free(str);
return (0);
}