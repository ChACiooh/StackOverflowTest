#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char *buf = NULL;
	size_t len;

	printf("Continue?(y/n)>");
	if((getline(&buf, &len, stdin) < 0) || 
			(len && buf[0] == 'n'))
	{
		printf("input(%s) / size:%zu\n", buf, len);
		free(buf);
		return 0;
	}
	if(buf) {
		printf("input(%s) / size:%zu\n", buf, len);
		printf("not NULL\n");
		free(buf);
	}
	return 0;
}
