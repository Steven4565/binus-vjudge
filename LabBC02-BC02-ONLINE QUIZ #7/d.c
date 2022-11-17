#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdbool.h>

void checkSquare(int n, bool *prime, bool *square, bool *cubic)
{
	if (n == 2)
	{
		return;
	}

	if (n == 1)
	{
		*square = true;
		*cubic = true;
		*prime = false;
		return;
	}

	for (int i = 1; i < n; i++)
	{
		if (i * i == n)
		{
			// printf("s: %d\n", i);
			*square = true;
		}
		if (i * i * i == n)
		{
			// printf("c: %d\n", i);
			*cubic = true;
		}
		if (i != 1 && n % i == 0)
		{
			// printf("i: %d\n", i);
			*prime = false;
		}
	}
}

int main()
{
	int test;
	scanf("%d", &test);

	for (int t = 0; t < test; t++)
	{
		int buffer;
		scanf("%d", &buffer);

		bool prime = true;
		bool square = false;
		bool cubic = false;

		checkSquare(buffer, &prime, &square, &cubic);

		printf("Case #%d : ", t + 1);
		if (square && cubic)
		{
			puts("square cubic");
		}
		else if (square)
		{
			puts("square");
		}
		else if (cubic)
		{
			puts("cubic");
		}
		else if (prime)
		{
			puts("prime");
		}
		else
		{
			puts("none");
		}
	}

	return 0;
}