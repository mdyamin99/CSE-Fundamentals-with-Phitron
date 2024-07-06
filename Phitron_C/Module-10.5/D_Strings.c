#include<stdio.h>
#include<string.h>

int main()
{
    char a[12];
    scanf("%s",a);
    char b[12];
    scanf("%s",b);

    int lena=strlen(a);
    int lenb=strlen(b);

    char c[100];
    for(int i=0;i<100;i++)
    {
        c[i]=a[i];
    }
    int i=lena;
    for(int j=0;j<12;j++)
    {
        c[i]=b[j];
        i++;
    }
    char temp=a[0];
    a[0]=b[0];
    b[0]=temp;

    printf("%d %d\n%s\n%s %s",lena,lenb,c,a,b);
    return 0;
}