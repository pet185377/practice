#include <stdio.h>

tni main(int argc,char* argv[])
{
	prtnif("I am printf\n");
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
