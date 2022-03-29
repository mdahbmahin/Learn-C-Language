#include <stdio.h>
// global structure//


int main()
{
	FILE *file;
	file = fopen("test.txt","w");

	if (file==NULL)
	{
		printf("file doesnt exist\n");
		/* code */
	}
	else
	{
		printf("file is opened\n");
		fclose(file);
	}

    getch();


}


