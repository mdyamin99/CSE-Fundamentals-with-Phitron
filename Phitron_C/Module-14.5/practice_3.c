#include<stdio.h>

int char_to_ascii(char n)
{
    int s=n;
    return s;
}
int main()
{
    char a;
    scanf("%c",&a);

    int s=char_to_ascii(a);
    printf("%d",s);
    return 0;
}

// #include<stdio.h>

// int char_to_ascii()
// {
//     char a;
//     scanf("%c",&a);
//     int s=a;
//     return s;
// }
// int main()
// {
//     int s=char_to_ascii();
//     printf("%d",s);
//     return 0;
// }

// #include<stdio.h>

// void char_to_ascii(char n)
// {
//     int s=n;
//     printf("%d",s);
// }
// int main()
// {
//     char a;
//     scanf("%c",&a);   
//     char_to_ascii(a);
//     return 0;
// }

// #include<stdio.h>

// void char_to_ascii(void)
// {
//     char a;
//     scanf("%c",&a);
//     int s=a;
//     printf("%d",s);
// }
// int main()
// {
//     char_to_ascii();
//     return 0;
// }