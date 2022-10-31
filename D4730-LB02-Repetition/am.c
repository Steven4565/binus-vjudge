#include <stdio.h>

const char *inputLine()
{
	const char *str;
	scanf("%[^\n]s", str);
	getchar();
	return str;
}

const char *jojo = " Jojo";
const char *lili = " Lili";

int main()
{
	int test;
	scanf("%d", &test);

	for (int t = 0; t < test; t++)
	{
		printf("Case #%d:\n", t + 1);

		int num;
		scanf("%d", &num);
		for (int i = 1; i <= num; i++)
		{
			const char *shouter;
			if ((i % 15 != 0) && (i % 3 == 0 || i % 5 == 0))
				shouter = jojo;
			else
				shouter = lili;
			printf("%d%s\n", i, shouter);
		}
	}

	return 0;
}