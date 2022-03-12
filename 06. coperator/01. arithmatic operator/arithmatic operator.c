#include<stdio.h>
int main()

{
    int num1 = 20,num2 = 10,jog,sum,avg;
    jog = num1+num2;
    printf("addition of two number = %d\n",jog);

    sum = num1-num2;
    printf("substruction of two number = %d\n",sum);

    sum = num1*num2;
    printf("multiplication of two number = %d\n",sum);

    sum = num1/num2;
    printf("devidation of two number = %d\n",sum);

    avg = (float)jog/2; // typecasting
    printf("avarage of two number = %.3f\n",avg);


    getch();
}
