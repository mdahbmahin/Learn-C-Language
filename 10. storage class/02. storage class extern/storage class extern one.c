#include<stdio.h>
void show();
int x=10;
main()
{
    extern int x;
    x=20;
    printf("%d ",x);
    show();
}
void show()
{
    printf("%d ",x);
}
