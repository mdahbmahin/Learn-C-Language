#include<stdio.h>
int main()
{

    int x=5;
    int xvalue = -x;// unary minus -
    printf("unary minus x value is = %d\n",xvalue);

    int y=10;
    int yvalue = +y;// unary plus +
    printf("unary minus y value is = %d\n\n",yvalue);


    int a=20;
    int b= ++a;
    printf("prefix increment value is = %d\n",b);// result = 21

    int c=20;
    int d= c++;
    printf("postfix increment value is = %d\n",d);// result = 20
    printf("postfix increment value is = %d\n\n",c);



    int e=20;
    int f= --e;
    printf("prefix decrement value is = %d\n",f);// result = 19

    int g=20;
    int h= g--;
    printf("postfix decrement value is = %d\n",h);// result = 20
    printf("postfix decrement value is = %d\n",g);
/*
result:
unary minus x value is = -5
unary minus y value is = 10

prefix increment value is = 21
postfix increment value is = 20
postfix increment value is = 21

prefix decrement value is = 19
postfix decrement value is = 20
postfix decrement value is = 19
*/



    getch();
}
