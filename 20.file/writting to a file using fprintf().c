#include <stdio.h>
// global structure//


int main()
{
	FILE *file;
	char name[20];
	int age;

	file = fopen("test.txt","w");

	if (file==NULL)
	{
		printf("file doesnt exist\n");

	}
	else
	{
		printf("file is opened\n");

		printf("Enter your fullname : ");
		gets(name);

		printf("Enter your age name : ");
		scanf("%d",&age);

		fprintf(file,"name = %s ,age = %d\n",name,age);
		printf("\n");
		printf("File is written succesfully\n");
		fclose(file);
	}

    getch();


}

