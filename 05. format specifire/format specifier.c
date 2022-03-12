

#include<stdio.h>
int main(){

int integerdata;
float floatdata;


printf("Enter Your Integer Type Data Or Number = ");
scanf("%d",&integerdata);
printf("You Entered = %d\n",integerdata);

printf("\n");

printf("Enter Your Float Type Data = ");
scanf("%f",&floatdata);
printf("You Entered = %f\n",floatdata);

return 0;

}
/*
Data Type               Format Specifier
-------------------------------------------
int                            %d

char                           %c

float                          %f

double                         %lf

short int                      %hd

unsigned int                   %u

long int                       %li

long long int                  %lli

unsigned long int              %lu

unsigned long long int         %llu

signed char                    %c

unsigned char                  %c

long double                    %Lf
*/
