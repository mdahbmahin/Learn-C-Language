#include<stdio.h>


int main()
{
    int num;
    int num1;

    printf("Enter Your Number To Calculate Even And Odd :");
    scanf("%d",&num);

    if(num%2==0)
    {
        printf("Your Number Is Even.\n");
    }
    else
    {
        printf("Your Number Is Odd.\n");
    }



    printf("Enter Your Number To Calculate Positive Or Nagative : ");
    scanf("%d",&num1);

    if(num1>0)
    {
        printf("Your Number Is Positive.\n");
    }
    else if(num1<0)
    {
        printf("Your Number Is Nagative.\n");
    }
    else
    {
        printf("You Entered Wrong\n");
    }



    getch();
}


