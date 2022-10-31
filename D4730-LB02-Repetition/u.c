#include <stdio.h>

int main()
{
	int test;
	scanf("%d%*c", &test);

	for (int t = 0; t < test; t++)
	{
		int n;
		scanf("%d%*c", &n);

		char str[1000];
		scanf("%[^\n]%*c", str);

		int score = 0;

		for (int i = 0; i < n; i++)
		{
			switch (str[i])
			{
			case 'L':
				score--;
				break;
			case 'B':
				score++;
				break;
			}
		}

		// printf("Case #%d: ", t + 1);
		printf("%s\n", (score == 0 ? "None" : (score > 0 ? "Bibi" : "Lili")));
	}

	return 0;
}