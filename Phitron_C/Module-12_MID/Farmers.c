#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int m1,m2,d;
        scanf("%d%d%d",&m1,&m2,&d);

        int sum=m1+m2;
        float ans=(m1*d)/sum;
        printf("%.0f\n",d-ans);
    }
    return 0;
}