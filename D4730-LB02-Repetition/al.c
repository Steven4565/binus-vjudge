#include <stdio.h>

int main()
{
	int n, m;

	scanf("%d%d", &n, &m);

	int maxAtk = 0;
	for (int i = 0; i < n; i++)
	{
		int buffer;
		scanf("%d", &buffer);
		if (buffer > maxAtk)
		{
			maxAtk = buffer;
		}
	}

	int maxDragon = 0;
	for (int i = 0; i < m; i++)
	{
		int buffer;
		scanf("%d", &buffer);
		if (buffer > maxDragon)
		{
			maxDragon = buffer;
		}
	}

	printf((maxAtk > maxDragon ? "The dark secret was true\n" : "Secret debunked\n"));

	return 0;
}