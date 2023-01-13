#include <stdio.h>

int main()
{
	FILE *handle = fopen("testdata.in", "r");

	int a, b;
	fscanf(handle, "%d%d", &a, &b);

	printf("%d\n", a + b);

	fclose(handle);

	return 0;
}