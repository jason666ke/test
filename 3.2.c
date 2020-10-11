#include<stdio.h>
main()
{
    double C,F;
    int n ;
    n=300;
    for(F=0;F<=n;F=F+10)
    {
        printf("fahr=%lf",F);
        printf("     ");
        C=(5.0/9)*(F-32);
        printf("   celsius=%lf\n",C);
        
    }
return 0 ;
}