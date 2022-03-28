#include <stdio.h>
// global structure//

struct person
{

	int age ;
	float salary;

};


int main(int argc, char const *argv[])
{
	struct person person1, person2;

       printf("Enter information for person1 details :\n");

       printf("Enter age:");
       scanf("%d",&person1.age);
       printf("Enter salary:");
       scanf("%f",&person1.salary);

	   printf("person 1 details:\n");
	   printf("age:%d\n",person1.age );
	   printf("salary:%.3f\n",person1.salary );


	   printf("\n");

       printf("Enter information for person2 details :\n");

       printf("Enter age:");
       scanf("%d",&person2.age);
       printf("Enter salary:");
       scanf("%f",&person2.salary);

	   printf("person 2 details:\n");
	   printf("age:%d\n",person2.age );
	   printf("salary:%.3f\n",person2.salary );


    getch();


}
