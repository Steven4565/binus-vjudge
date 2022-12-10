#include <stdio.h>
#include <string.h>

void recurse(char *str, int index)
{
	if (index < 0)
	{
		return;
	}

	printf("%c", str[index]);
	recurse(str, index - 1);
}

int main(int argc, char const *argv[])
{
	int test;
	scanf("%d", &test);

	for (int t = 0; t < test; t++)
	{
		char str[1001];
		scanf(" %[^\n]", str);

		printf("Case #%d: ", t + 1);
		recurse(str, strlen(str) - 1);
		puts("");
	}

	return 0;
}
