#include <stdio.h>

int main() {

    int n,i;
    scanf("%d",&n);

    for(i=1;i<=n;i+=1)
    {
        printf("%d\n",i);
        if(i==5)
        {
            break;
        }
    }

    return 0;
}