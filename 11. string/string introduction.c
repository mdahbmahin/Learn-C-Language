#include<stdio.h>
main()
{
    char s1[6];
       s1[0]='M';
       s1[1]='A';
       s1[2]='H';
       s1[3]='I';
       s1[4]='N';
       s1[5]='\0';
       printf("s1 is = %s\n",s1);

    char s2[4]={'A','H','B','\0'};
    printf("s2 is = %s\n",s2);

    char s3[]={'M','d','.','\0'};
    printf("s3 is = %s\n",s3);

    char s4[]="Md. Ahb Mahin";
    printf("s4 is = %s\n",s4);

       getchar();
}
