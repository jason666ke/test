#include<stdio.h>
#include<math.h>
main()
{
    int n=1,count=1;
    float x;
    double sum,term;
    printf("Input x:");
    scanf("%f",&x);
    sum=x;
    term=x;
    do
    {
      term=-term*x*x/(n+1)*(n+2);
      sum=sum+term;
      n=n+2;
      count++;
    } while (fabs(term)>=1e-5);
    printf("sin(x)=%lf, count=%d", sum,count);
    return 0 ;
    
}