
#include<stdio.h>
int main()

{
    int number;
    char text[100];

    printf("Enter Your Roll Number = ");
    scanf("%d",&number);
    printf("You Roll Number Is = %d\n",number);

    printf("Enter Your Name By Text Value = ");
    scanf("%s",&text);
    printf("You Name Is = %s\n",text);

    printf("\nDatabase matched ! Your are now connected. \n");


    return 0;

}
