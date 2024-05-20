#include<stdio.h>

int main()
{
    double x=26.64;
    double *ptr =&x;
    double *ptr2=ptr;
    *ptr2 =100.34;

    printf("X er value = %.2lf\n",x);
    printf("Ptr er value = %.2lf\n",*ptr);
     printf("Ptr2 er value = %.2lf\n",*ptr2);
    
    return 0;
}