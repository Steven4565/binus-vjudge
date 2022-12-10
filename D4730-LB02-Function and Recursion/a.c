#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS 1

int process(int num, int *count)
{

	if (num == 0)
	{
		return 1;
	}
	else if (num == 1)
	{
		return 2;
	}

	if (num % 3 == 0)
	{
		(*count)++;
	}

	if (num % 5 == 0)
	{
		return num * 2;
	}

	return process(num - 1, count) + num + process(num - 2, count) + num - 2;
}

int main(int argc, char const *argv[])
{
	int test;
	scanf("%d", &test);

	for (int t = 0; t < test; t++)
	{
		int num;
		scanf("%d", &num);

		int count = 0;
		int res = process(num, &count);

		printf("Case #%d: ", t + 1);
		printf("%d %d\n", res, count);
	}

	return 0;
}
