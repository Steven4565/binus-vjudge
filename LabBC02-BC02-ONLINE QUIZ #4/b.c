// Playing Monopoly

#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);

	int pos = 0;
	for (int i = 0; i < t; i++)
	{
		int temp;
		scanf("%d", &temp);
		pos += temp;
		pos %= 40;
		if (pos == 12)
		{
			pos += 16;
		}
		else if (pos == 35)
		{
			pos += 12;
		}
		else if (pos == 30)
		{
			pos = 10;
		}
		pos %= 40;
	}

	printf("%d\n", pos);

	return 0;
}