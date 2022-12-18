#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    int a[t];
    for(int i=0; i<t; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<t; i++)
    {
        int ch;
        while(a[i]!=0)
        {
            ch=a[i]%10;
            printf("%c",ch+64);
            a[i]=a[i]/10;
        }
        printf("\n");
    }
    return 0;
}
