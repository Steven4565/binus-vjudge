#include <stdio.h>

int main()
{
	int test;
	scanf("%d%*c", &test);
	for (int t = 0; t < test; t++)
	{
		int needed, has, store;
		scanf("%d%d%d", &needed, &has, &store);
		printf("Case #%d: %s", t + 1, (has + store >= needed ? "yes\n" : "no\n"));
	}
	return 0;
}