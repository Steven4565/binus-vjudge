// Playing Monopoly

#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);

	int sum = 0;
	for (int i = 0; i < t; i++)
	{
		int temp;
		scanf("%d", &temp);
		sum += temp;
	}

	printf("%d\n", sum);

	return 0;
}