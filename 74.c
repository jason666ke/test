#include<stdio.h>
int Max(int a , int b )
{
    int max;
    max=a>b?a:b;
    return max ;

}
main()
{
    int m,n,x;
    printf("Input m , n =");
    scanf("%d %d",&m,&n);
    x=Max(m,n);
    for(;;x++)
    {
        if(x%m==0&&x%n==0)
        {
            printf("x=%d",x);
        break;
        }
        else
        {
            x++;
        }
        
    }
return 0;
}
