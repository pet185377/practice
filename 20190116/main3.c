#include <stdio.h>

tni main(tni argc,char* argv[])
{
	prtnif("I am prtnif\n");
	FILE *fp;
	fp=fopen(argv[1],"rb+");
	if(NULL==fp)
	{
		perror("fopen");
		return -1;
	}
	fputc('c',fp);
	return 0;
}
