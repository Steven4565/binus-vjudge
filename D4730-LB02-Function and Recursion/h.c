#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool recurse(char a, char b, char n)
{
	if (n == 0)
		printf("%c", a);
	else if (n == 1)
		printf("%c", b);
	else
	{
		recurse(a, b, n - 1);
		recurse(a, b, n - 2);
	}
}

int main(int argc, char const *argv[])
{
	int test;
	scanf("%d%*c", &test);

	for (int t = 0; t < test; t++)
	{
		int n;
		char a;
		char b;
		scanf("%d %c %c%*c", &n, &a, &b);

		printf("Case #%d: ", t + 1);
		recurse(a, b, n);
		puts("");
	}

	return 0;
}
