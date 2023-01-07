#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <malloc.h>

int main()
{

	int test;
	scanf(" %d", &test);

	for (int t = 0; t < test; t++)
	{
		int n;
		scanf(" %d", &n);

		int min, max;
		scanf(" %d %d", &min, &max);

		int counter = 0;
		int valid = 0;
		bool flag = false;
		for (int i = 0; i < n; i++)
		{
			char buffer;
			scanf(" %c", &buffer);
			if (buffer == '1')
			{
				counter++;
			}
			else
			{
				counter = 0;
				flag = false;
			}
			if (counter >= min && counter <= max && !valid)
			{
				valid++;
				flag = true;
			}
		}

		printf("Case #%d: %d\n", t + 1, valid);
	}

	return 0;
}
