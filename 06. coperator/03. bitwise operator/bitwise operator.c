#include<stdio.h>
int main()
{

    int a= 32;
    int b= 12;
    int c;

    c=a&b;// bitwise and
    printf("a&b bitwise and is = %d\n",c);

    c=a|b;// bitwise or
    printf("a|b bitwise or is = %d\n",c);

    c=a^b;// bitwise xor
    printf("a^b bitwise xor is = %d\n",c);
/*
result:
a&b bitwise and is = 0
a|b bitwise or is = 44
a^b bitwise xor is = 44

*/

    getch();
}
