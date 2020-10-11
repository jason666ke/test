#include<stdio.h>
main()
{
    int i , j ;
    for(i=1;i<=9;i++)
    {
        printf("%4d",i);
    }
    printf("\n");
    printf("   -   -   -   -   -   -   -   -   -\n");
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9;j++)
        {
            printf("%4d",i*j);
        }
    printf("\n");
    }
    return 0;



}