#include <stdio.h>
int gcd(int a,int b);
int main()
{
    int t;
    scanf("%d",&t);
    for (int x =1; x<=t; x++)
    {
        int n,count=0,ar[1000];
        scanf("%d",&n);
        for (int i= 0; i < n; i++)
        {
            scanf("%d",&ar[i]);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (ar[i]==ar[j])
                {
                    continue;
                }
                if(gcd(ar[i],ar[j])==1)
                {
                    count++;
                }
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
int gcd(int a,int b)
{
    int gc,i;
    for( i=1; i<=a && i<= b; i++)
    {
        if (a% i==0 && b % i==0)
            gc=i;
    }
    return gc;
}
