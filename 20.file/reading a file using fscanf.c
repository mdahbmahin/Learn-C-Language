
#include <stdio.h>
//reading a file using fscanf.c //


int main()
{
	FILE *file;
	char fname[20],lname[20];
	file = fopen("test.txt","r");

	if (file==NULL)
	{
		printf("file doesnt exist\n");

	}
	else
	{
		printf("file is opened\n");
		fscanf(file,"%s %s",&fname,&lname);
		printf("%s %s\n",fname ,lname);
		fclose(file);
	}

    getch();


}

