#include<stdio.h>
void up();
int main()
{
        up();
        up();
        up();
        up();
}

void up()
{
    static int i=12;
    printf("%d\n",i);
    i++;

}
