#include<stdio.h>
#include<stdlib.h>

int main()
{
	char tmpname[L_tmpnam];
	char *filename;
	FILE *tmpfp;

	 tmpnam(tmpname);

	printf("Temporary file name is : %s\n",tmpname);
	tmpfp = tmpfile();
	if(tmpfp)
		printf("Open a temporary file OK\n");
	else
		perror("tmpfile");
	exit(0);
}