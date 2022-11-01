#include<stdio.h>

int main()
{
    int a,m,n;
    char c;

    scanf("%d",&a);
    scanf("%d %c %d",&m, &c, &n);
    

    if(c=='+')
    {
        if(m+n<=a)
        {
            printf("OK\n");
        }
        else
            printf("OVERFLOW\n");

    }

    else
    {
        if(m*n<=a)
            {
                printf("OK\n");
            }
            else{
                printf("OVERFLOW\n");
            }
    }

    return 0;
}
