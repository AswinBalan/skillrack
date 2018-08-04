#include<stdio.h>
//program to print bottom right part of the matrix--skillrack 31/7/218 dc
int main()
{
int n ,i ,j ,a[50][50];
scanf("%d",&n); //getting row and column size row == column
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
  scanf("%d",&a[i][j]);
}
}
for(i=n/2;i<n;i++)
  {
    for(j=n/2;j<n;j++)
      {
          printf("%d ",a[i][j]);
       }
   printf("\n");
  }
return (0);
}