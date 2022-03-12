#include<stdio.h>

  int main() {

    int a, b, max;

    printf("Enter any two numbers \n");
    scanf("%d %d", & a, & b);

    /* Following statement replaces the whole if-else statement and makes the code more concise*/

    max = (a > b) ? a : b;

    printf("%d", max);

    printf(" is the largest number of given numbers");

    return 0;
  }


  /* other program

  #include<stdio.h>
int main()
{
    int a, b, c, max;
    printf("Enter any three numbers\n");
    scanf("%d%d%d", &a, &b, &c);

    max= (a > b) ? (a > c ? a : c) : (b > c ? b : c);

    printf ("%d", max);
    printf (" is the largest number of given numbers");

    return 0;

}
  */

  /* other program

  #include <stdio.h>
int main()
{
    int a, b, c, max;
    printf("Enter any three numbers\n");
    scanf("%d%d%d", &a, &b, &c);

    (a > b)? (a > c ? printf(" the largest number is : %d" , a) :
      printf ("the largest number is : %d", c) :
    (b > c ? printf ("the largest number is: %d", b) :
       printf("  the largest number is : %d", c);
    return 0;

}
  */
