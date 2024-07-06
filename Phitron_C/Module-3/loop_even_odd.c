#include <stdio.h>

int main() {

    int i,n;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d - Even\n",i);
        }
        else
        {
            printf("%d - Odd\n",i);
        }
    }

    return 0;
}