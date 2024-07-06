#include<stdio.h>

int main()
{
    long long int a,k;
    scanf("%lld %lld",&a,&k);
    long long int ar[a];
    for(int i=0;i<a;i++)
    {
       scanf("%lld",&ar[i]); 
    }
    for(int i=0;i<a-1;i++)
    {
        for(int j=i+1;j<a;j++)
        {
            if(ar[i]<ar[j])
            {
                int tmp=ar[i];
                ar[i]=ar[j];
                ar[j]=tmp;
            }
        }
    }
    long long int sum=0;
    for(int i=0;i<k;i++)
    {
        if(ar[i]<0)
        {
            break;
        }
        sum+=ar[i];
    }
    printf("%lld\n",sum);
    return 0;
}