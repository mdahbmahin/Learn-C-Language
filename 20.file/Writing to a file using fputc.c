#include <stdio.h>
// global structure//


int main()
{
	FILE *file;
	char name[20] = "Mahin Hossain";
	int length = strlen(name);
	int i;
	file = fopen("test.text","w");

	if (file==NULL)
	{
		printf("file doesnt exist\n");

	}
	else
	{
		printf("file is opened\n");
		for (i = 0; i < length; i++)
		{
            fputc(name[i],file);

		}
		printf("file is written succsesfully\n");
		fclose(file);
	}

    getch();


}

