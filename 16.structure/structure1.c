#include <stdio.h>
// global structure//

struct person
{

	int age ;
	float salary;

};


int main(int argc, char const *argv[])
{
	struct person person1, person2,person3={45,45000},person4;

	// person3 ={45,45000}; is direct initialization//


	person1.age=20;
	person1.salary=11250.50;


	person2.age=22;
	person2.salary=14250.50;

    person4=person3;
	person4=person3;

	printf("person 1 details:\n");
	printf("age:%d\n",person1.age );
	printf("salary:%.3f\n",person1.salary );

	printf("\n");

    printf("person 2 details:\n");
	printf("age:%d\n",person2.age );
	printf("salary:%.3f\n",person2.salary );

	printf("\n");


    printf("person 3 details:\n");
	printf("age:%d\n",person3.age );
	printf("salary:%.3f\n",person3.salary );


    printf("\n");


    printf("person 4 details:\n");
	printf("age:%d\n",person4.age );
	printf("salary:%.3f\n",person4.salary );


    getch();


}
