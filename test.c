#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	//int b = -1; /* prevent null-termination */
	char buf[4];
	int a = -1;	/* prevent null-termination */
	char *str = "teststr";
	int *c = buf + 4;
	char buf2[100] = "hello";
	//*c = 512;

	printf("size of(%s):%zu\n", str, sizeof(str));
	printf("size of(%s):%zu\n", buf2, sizeof(buf2));

	strncpy(buf, str, 4);

	int i = 0;
	printf("copied:%s\n",buf);
	while(buf[i] != '\0')
	{
		printf("%c, %p\n", buf[i], buf+i);
		i++;
	}
	//printf("addr of b:   %p\n", &b);
	printf("addr of buf: %p\n", &buf);
	printf("addr of a:   %p\n", &a);
	printf("addr of str: %p\n", &str);
	printf("addr of c:   %p\n", c);
	return 0;
}
