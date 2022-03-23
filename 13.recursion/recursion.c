
#include<stdio.h>
int main()
{
    int result = fact(5);
    printf("Factorial of 5 = %d ",result);

}
int fact(int n)
{
    if(n==1) // base case
        return 1;//base case
    else
        return n*fact(n-1);
}
