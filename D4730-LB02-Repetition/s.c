#include <stdio.h>

int main()
{
	int n, strength;
	scanf("%d %d", &n, &strength);

	int pops = 0;

	for (int i = 0; i < n; i++)
	{
		int buffer;
		scanf("%d", &buffer);
		if (buffer < strength)
		{
			pops++;
		}
	}

	printf("%d\n", pops);

	return 0;
}