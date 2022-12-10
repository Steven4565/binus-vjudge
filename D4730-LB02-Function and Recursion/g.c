#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool recurse(char *str, int left, int right)
{
	// printf("l: %d | r: %d | l: %c | r: %c\n", left, right, str[left], str[right]);
	if (left >= right)
	{
		return true;
	}

	if (str[left] == str[right])
	{
		return recurse(str, left + 1, right - 1);
	}
	else
	{
		return false;
	}
}

int main(int argc, char const *argv[])
{
	int test;
	scanf("%d%*c", &test);

	for (int t = 0; t < test; t++)
	{
		char str[1001];
		scanf("%[^\n]%*c", str);

		bool res = recurse(str, 0, strlen(str) - 1);

		printf("Case #%d: %s\n", t + 1, res ? "yes" : "no");
	}

	return 0;
}
