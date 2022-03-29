
#include <stdio.h>
int main()
{
	FILE *file;
	char name[20];
	int age,phonenumber,num,i;

	file = fopen("student details.txt","a");
	if (file==NULL)
	{
		printf("file doesnt exist\n");

	}
	else
	{

		printf("file is opened.\n");

		printf("Enter number of student: ");
		scanf("%d",&num);

		for (i = 0; i <num; i++)
		{
			printf("Enter student name : ");
			scanf("%s",&name);

			printf("Enter student age : ");
			scanf("%d",&age);

			printf("Enter student phonenumber : ");
			scanf("%s",&phonenumber);

            printf("\n");




			fprintf(file, "%s\t\t%d\t%d\n",name,age,phonenumber);
		}


	}
	getch();
}
