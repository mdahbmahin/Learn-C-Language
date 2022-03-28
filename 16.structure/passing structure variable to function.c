#include <stdio.h>
// global structure//
struct person
{
    char name[50];
	int age ;
	float salary;

};

void display(struct person p)
{
    printf("name : %s\n",p.name);
    printf("age : %d\n",p.age);
    printf("salary : %f\n",p.salary);
    printf("\n");

}

int main()
{

	struct person person1,person2;

    strcpy(person1.name,"mahin");
    person1.age=18;
    person1.salary=15550.50;
    display (person1);


    strcpy(person2.name,"mahin2");
    person2.age=19;
    person2.salary=19550.50;
    display (person2);

    getch();


}



