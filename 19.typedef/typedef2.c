
#include<stdio.h>
// using typedef we can change keyword or data type name ;
struct book
{
    char name[20];
    int price;
};
int main()
{
    typedef struct book Book;

    Book b = {"bidrohi",350};

    printf("Book name = %s \n",b.name);
    printf("Book price = %d \n",b.price);

    getch();
}

