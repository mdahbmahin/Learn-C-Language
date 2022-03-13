#include<stdio.h>
void show();
int x=10;
main()
{
    //int x;
    x=20;
    printf("%d ",x);
    show();
    printf("%d ",x);
}
void show()
{
    printf("%d ",x);
    x=30;
}
