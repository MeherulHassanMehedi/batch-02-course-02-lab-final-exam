#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int prime_chack(int m);
void display_prime(int x,int y);
int main()
{
    int t;
    scanf("%d",&t);
    int a1[t];
    int a2[t];
    for(int i=0; i<t; i++)
    {
        scanf("%d",&a1[i]);
        scanf("%d",&a2[i]);
    }
    for(int i=0; i<t; i++)
    {
        display_prime(a1[i],a2[i]);
        printf("\n");
    }
    return 0;
}
void display_prime(int x,int y)
{
    for(int i=x; i<=y; i++)
    {
        if(prime_chack(i)==1)
        {
            printf("%d ",i);
        }
    }
}
int prime_chack(int m)
{
    for(int i=2; i<m; i++)
    {
        if(m%i==0)
        {
            return 0;
        }
    }
    return 1;
}
