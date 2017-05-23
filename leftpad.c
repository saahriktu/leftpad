// v0.6 by Saahriktu
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	long int a2, al;
	char *buf;
	if (argc < 4) {
		printf("usage: leftpad string width char\n");
		return 1;
	}
	a2 = atol(argv[2]);
	al = a2 - strlen(argv[1]);
	if (al < 1) {
		printf("%s\n", argv[1]);
		return 0;
	}
	buf = (char *)malloc((a2 + 1));
	if (buf == NULL)
		return 1;
	memset(buf, argv[3][0], al);
	buf[al] = '\0';
	printf("%s\n", strcat(buf, argv[1]));
	free(buf);
	return 0;
}
