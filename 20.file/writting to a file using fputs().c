#include <stdio.h>
// global structure//


int main()
{
	FILE *file;
	char name[20];

	file = fopen("test.txt","w");

	if (file==NULL)
	{
		printf("file doesnt exist\n");

	}
	else
	{
		printf("file is opened\n");
		printf("Enter your fullname :");
		gets(name);

		fputs(name,file);
		fputs("\n",file);
		printf("File is written succesfully\n");
		fclose(file);
	}

    getch();


}


