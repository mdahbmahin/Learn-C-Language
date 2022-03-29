
#include<stdio.h>
// union uses same memory location in computer.
// it use for tree or binary
union test
{
    int x,y;
};

int main()
{
    union test t1;
    t1.x=10;

    printf("x is = %d\n",t1.x);
    printf("y is = %d\n",t1.y);

    printf("\n");

    t1.y=20;

    printf("x is = %d\n",t1.x);
    printf("y is = %d\n",t1.y);

    getch();
}
