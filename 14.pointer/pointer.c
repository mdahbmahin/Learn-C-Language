#include<stdio.h>
int main()
{
    int x=5;
    int *ptr;
    ptr=&x;

    printf("value of x = %d\n",x);
    printf("address of x = %u\n",&x);
    printf("address of pointer = %d\n",ptr);
    printf("value of pointer = %d\n",*ptr);
    printf("pointer variable address = %d\n",&ptr);

    return 0;
}
