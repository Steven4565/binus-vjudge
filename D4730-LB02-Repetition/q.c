#include <stdio.h>
#include <math.h>

int main()
{
	int test;
	scanf("%d", &test);

	for (int t = 0; t < test; t++)
	{
		int pages, target;
		scanf("%d %d", &pages, &target);

		int flipsFront = floor(target / 2);
		int flipsBack = pages / 2 - flipsFront;

		printf("Case #%d: ", t + 1);
		printf("%d\n", (flipsFront < flipsBack ? flipsFront : flipsBack));
	}

	return 0;
}