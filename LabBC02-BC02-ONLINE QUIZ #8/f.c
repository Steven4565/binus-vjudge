#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
	int test;
	scanf("%d%*c", &test);
	for (int t = 0; t < test; t++)
	{
		char str[100000];
		scanf("%s%*c", str);

		bool map[27];
		for (int i = 0; i < 27; i++)
		{
			map[i] = false;
		}

		int length = strlen(str);
		int counter = 0;
		for (int i = 0; i < length; i++)
		{
			if (map[str[i] - 'a'] == false)
				counter++;
			map[str[i] - 'a'] = true;
		}

		printf("Case #%d: %s\n", t + 1, (counter % 2 == 0 ? "Yay" : "Ewwww"));
	}

	return 0;
}