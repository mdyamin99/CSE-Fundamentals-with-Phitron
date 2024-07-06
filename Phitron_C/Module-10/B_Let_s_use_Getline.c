#include<stdio.h>

int main()
{
    char a[1000002];
    fgets(a,sizeof(a),stdin);

    for(int i=0;a[i]!='\\';i++)
    {
        printf("%c",a[i]);
    }
    return 0;
}