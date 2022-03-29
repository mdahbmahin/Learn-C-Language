#include <stdio.h>
// global structure//


int main()
{
	FILE *file;
	char name[40];


	file = fopen("test.txt","r");

	if (file==NULL)
	{
		printf("file doesnt exist\n");

	}
	else
	{
		printf("file is opened\n");

		while(!feof(file))
		{
			fgets(name,39,file);
			printf("%s\n",name );

		}
		fclose(file);
	}

    getch();


}

