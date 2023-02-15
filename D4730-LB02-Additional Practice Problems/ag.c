#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <malloc.h>

#define int long long

signed main()
{
	FILE *handle = fopen("testdata.in", "r");

	int counter = 0;
	while (!feof(handle))
	{
		char buffer[200];
		fscanf(handle, "%[^\n]\n", buffer);
		int length = strlen(buffer);

		bool colon = true;
		for (int i = 0; i < length; i++)
		{
			if (buffer[i] == ';')
			{
				if (colon == true)
					counter++;
				colon = true;
			}
			else
				colon = false;
		}
	}

	int sum = 1;
	for (int i = 0; i < counter; i++)
	{
		sum *= 101;
		sum = sum % 1000000007;
	}
	printf("%lld\n", sum);

	fclose(handle);

	return 0;
}
