#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{

	int test;
	scanf("%d", &test);

	for (int t = 0; t < test; t++)
	{
		int n;
		scanf("%d", &n);
		int arr[n];

		for (int i = 0; i < n; i++)
		{
			scanf("%d", &arr[i]);
		}

		int bibi, lili;
		scanf("%d%d", &bibi, &lili);

		int bibiVal = arr[bibi - 1];
		int liliVal = arr[lili - 1];

		printf("Case #%d : %s\n", t + 1, (liliVal == bibiVal ? "Draw" : (liliVal > bibiVal ? "Lili" : "Bibi")));
	}

	return 0;
}