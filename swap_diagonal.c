#include<stdio.h>
int main()
{
    int i,j,k=0,a[50][50],tmp,n,inc=1;
    scanf("%d",&n);
    k =n-1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
        tmp=a[i][i];
        a[i][i]=a[i][j-inc];
        a[i][j-inc]=tmp;
        inc++;
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
    
        
        }
        printf("\n");
    }
    return (0);
}