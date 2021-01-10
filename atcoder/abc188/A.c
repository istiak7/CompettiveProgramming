#include<stdio.h>
int main()
{
    int x,y,xadd,yadd;
    scanf("%d %d",&x,&y);
    if(x>=y)
    {
        xadd=y+3;
        if(xadd>x)
        {
            printf("Yes\n");
        }
        else
            printf("No\n");
    }
    if(x<y)
    {
        yadd=x+3;
        if(yadd>y)
        {
            printf("Yes\n");
        }
        else
            printf("No\n");
    }
    return 0;
}
