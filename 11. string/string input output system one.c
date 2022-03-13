#include<stdio.h>
main()
{

    char s1[30];
    printf("Enter your name: ");
    scanf("%s",&s1);
    printf("Your name is : %s\n ",s1);

    char s2[40];
    printf("Enter your name: ");
    gets(s2);
    printf("Your name is : %s\n ",s2);

       getchar();
}
