#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],min,p;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    min=a[0];
        for(i=1; i<n; i++)
    {
        if(min>a[i])
        {
            min=a[i];
            p=i;
        }
    }
        printf("%d %d",min,p);
    return 0;
}
