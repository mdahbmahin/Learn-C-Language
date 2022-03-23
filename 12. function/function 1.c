#include<stdio.h>
int sum(int a, int b)
{
    return a+b;
    //printf("Sum of two number:%d\n",a+b);

}

int main()
{

    int num1,num2;

    printf("Enter Number one:");
    scanf("%d",&num1);

    printf("Enter Number two:");
    scanf("%d",&num2);

    printf("Sum of two number:%d\n",sum(num1,num2));// type 1
    int result= sum(num1,num2);

    printf("Sum of two number:%d\n",result); // type 2

    //sum(10,5);


}
