#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x[n];//1st array
    int a[n];// 2nd arrray
    int i,j;
    for(i=0; i<n; i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=1; j<n-i; j++)
        {
            if(x[j]<x[j-1])
            {
                int temp=x[j];
                x[j]=x[j-1];
                x[j-1]=temp;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=1; j<n-i; j++)
        {
            if(a[j]>a[j-1])
            {
                int temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",x[i]-a[i]);
    }
    return 0;
}
