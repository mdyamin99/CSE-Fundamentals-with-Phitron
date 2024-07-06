#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }

    int largest=ar[0];
    for(int i=0;i<n;i++)
    {
        if(ar[i]>largest)
        {
            largest=ar[i];
        }
    }
    int cnt[largest+1];
    for(int i=0;i<=largest;i++)
    {
        cnt[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        int index=ar[i];
        cnt[index]+=1;
    }
    int count=0;
    int unq=0;
    for(int i=largest;i>=0;i--)
    {
        if(cnt[i]>1)
        {
            count++;
        }
        if(cnt[i]==1)
        {
            unq++;
        }
    }
    printf("Unique - %d\n",unq);
    printf("Duplicate - %d",count);
    return 0;
}