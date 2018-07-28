#include<stdio.h>
#include <stdlib.h>

int main()
{
  int r,k,s,s1,c,n,v,n1,i,j,a[50][50],var=0,var1=0,inc=0,l,iter=0,len=0,b[11];
  scanf("%d %d",&r,&c);
  for(i=0;i<r;i++)
  {
      for(j=0;j<c;j++)
      {
          scanf("%d",&a[i][j]);
      }
  }
  scanf("%d",&n1);
 n = n1;
  while(n1>0)
  {
      b[len] = n1%2;
      n1 = n1/2;
      len++;
  }
 if(c>=r){v =c;}
 else
  {v=r;}
  //printf("length %d %d\n",len,n);
  for(i=0;i<v;i++)
  {
    var =0;
    var1 =0;
    s =0;
    s1 = 0;
     //printf("i value %d\n",i);
      for(j=i;((var-1)<= (c-len)) || ((var1-1)<= (r -len)); )
      {
       // printf("j value %d\n",j);
        iter = len;
        s =0;
        s1 = 0;

        //printf("len %d var %d var1 %d c %d\n",len,var,var1,c);
        //printf("k value %d ")
          for(k=var++;((k<(len+var-1))&&((var-1) <= (c-len)));k++)
          {
            //printf("k value %d total %d var %d \n",k,(len+var-1),(var));
             if(b[--iter] ==a[j][k])
             {
                 s++;   
             }
          }
          iter = len;
          for(l= var1++;((l <(len+var1-1))&&((var1-1) <= (r-len)));l++)
          {
            printf("l value %d\n",l);
            if(b[--iter] == a[l][j])
            {
              s1++;
            }
          }
          if(s== len )
          {
            //printf("%d %d %d\n",k,l,len);

            inc ++;
            //printf("from k %d\n",inc);
          }
          if(s1 == len)
          {
            inc++;
           // printf("from l %d\n",inc);
          }

      }
  }
  printf("%d",inc);
  return (0);

}
//number of binary equivalent of a number in the given binary matrix
