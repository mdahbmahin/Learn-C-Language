#include<stdio.h>

int main()
{
    int  i = 10;
    char c = 'a';
    float flt = 5.5;
    double dbl = 10.55;

    printf("Value of i = %d\n",i);
    printf("Value of c = %c\n",c);
    printf("Value of flt = %.2f\n",flt);
    printf("Value of dbl = %.3lf\n",dbl);

    return 0;
}
/*

Format Specifier         Data Type             description                                 Syntax
----------------------------------------------------------------------------------------------------------------------
%d                         int              To print the integer value            printf("%d",<int_variable>);

%c                         char             To print the character value          printf("%c",<char_variable>);

%f                         float            To print the float value              printf("%c",<float_variable>);

%lf                         double          To print the double value             printf("%c",<double_variable>);
*/
