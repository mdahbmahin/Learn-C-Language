#include <stdio.h>
// global structure//
struct person
{

	int age ;
	float salary;

};

int main()
{
	struct person person[4];
	int i;

	for (i = 0; i<4; i++)

	{
		printf("Enter information for person %d :\n",i+1);
        printf("Enter age: ");
        scanf("%d",&person[i].age);
        printf("Enter salary: ");
        scanf("%f",&person[i].salary);
	}


    for (i = 0; i<4; i++)

	{
	    printf("\n");
		printf("Information for person %d :\n",i+1);
        printf("age: %d\n",person[i].age);
        printf("salary: %.2f\n",person[i].salary);

	}



    getch();


}

