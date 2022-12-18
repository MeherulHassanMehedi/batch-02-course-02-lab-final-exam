#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int l;
    for(i=1; i<=n; i++)
    {
        l=n-i;

        for(int k=l; k>0; k--)
        {
            printf(" ");
        }
        for(j=1; j<=i*2-1;  j++)
        {
            if(i%2!=0) printf("^");
            else  printf("*");
        }
        for(int k=l; k>0; k--)
        {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
