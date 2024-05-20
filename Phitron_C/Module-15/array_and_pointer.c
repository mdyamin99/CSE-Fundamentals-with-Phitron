#include<stdio.h>

int main()
{
    int ar[5]={10,20,30,40,50};

    // printf("%d\n",ar[0]);
    // printf("%d\n",*ar);

    printf("%d\n",ar[1]);
    printf("%d\n",*(ar+1));
    printf("%d\n",1[ar]);
    printf("%d\n",*(1+ar));
    return 0;
}