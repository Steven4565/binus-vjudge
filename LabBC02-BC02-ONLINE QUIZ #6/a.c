#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>

int main()
{
	int n;
	scanf("%d", &n);

	int nums[n];
	int count[n];
	int numsLen = 0;
	for (int i = 0; i < n; i++)
	{
		count[i] = 0;
	}

	int modeIdx = 0;
	int mode = 1;
	for (int i = 0; i < n; i++)
	{
		int buffer;
		scanf("%d", &buffer);

		bool found = false;
		for (int j = 0; j < numsLen; j++)
		{
			found = false;
			if (nums[j] == buffer)
			{
				found = true;
				count[j]++;
				if (count[j] > mode)
				{
					modeIdx = j;
					mode = count[j];
				}
				break;
			}
		}
		if (!found)
		{
			nums[numsLen] = buffer;
			count[numsLen] = 1;
			numsLen++;
		}
	}
	printf("%d\n", mode);

	return 0;
}