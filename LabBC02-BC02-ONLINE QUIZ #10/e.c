#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <malloc.h>

const double pi = 3.14;

int main()
{

	int test;
	scanf("%d", &test);

	for (int t = 0; t < test; t++)
	{
		double r, h;
		scanf("%lf %lf", &r, &h);

		double area = 0;
		area += 2 * r * r * pi;
		area += 2 * r * pi * h;

		printf("Case #%d: %.2lf\n", t + 1, area);
	}

	return 0;
}
