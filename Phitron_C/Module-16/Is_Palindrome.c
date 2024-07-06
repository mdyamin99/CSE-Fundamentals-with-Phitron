#include<stdio.h>
#include<string.h>

int is_palindrome(char ar[])
{
    int i=0,j=strlen(ar)-1;
    int count=1;
    while(i<j)
    {
        if(ar[i]!=ar[j])
        {
            count=0;
        }
        i++;
        j--;
    }
    return count;
}

int main()
{
    char ar[1002];
    scanf("%s",ar);
    int ans=is_palindrome(ar);
    if(ans==1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    return 0;
}