#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdbool.h>

int main()
{
	int test;
	scanf("%d", &test);

	for (int t = 0; t < test; t++)
	{
		long long length[3];
		long long sum = 0;
		long long hypotenuse = -1;
		for (int i = 0; i < 3; i++)
		{
			scanf("%lld", &length[i]);
			sum += length[i];
			if (length[i] > hypotenuse)
			{
				hypotenuse = length[i];
			}
		}

		bool triangle = (sum - hypotenuse) > hypotenuse;
		puts((triangle ? "BISA" : "TIDAK BISA"));
	}
	return 0;
}