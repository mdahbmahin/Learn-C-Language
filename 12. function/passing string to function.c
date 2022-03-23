#include<stdio.h>

void display(char s1[])
{
    int i=0;

    while(s1[i]!='\0')
    {
        printf("%c\n",s1[i]);
        i++;
    }

}

int main()
{
    printf("mahin\n");
    char str[]= "mahin";
    display(str);
}
