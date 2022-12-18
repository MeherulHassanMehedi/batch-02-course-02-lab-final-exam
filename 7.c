#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{int t;
scanf("%d",&t);
for(int j=1;j<=t;j++){
    int n;
    int ex;
    int flag=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&ex);
    for(int i=0; i<n; i++)
    {
        if(a[i]==ex)
        {
            flag=1;
            printf("Case %d: %d\n",j,i+1);
            break;
        }
    }
    if(flag==0)
    {
        printf("Case %d: Not Found\n",j);
    }
}
    return 0;
}
