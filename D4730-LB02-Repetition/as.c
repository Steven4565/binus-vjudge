#include <stdio.h>
#include <math.h>

int main()
{
	int test;
	scanf("%d%*c", &test);

	for (int t = 0; t < test; t++)
	{

		int n;
		scanf("%d%*c", &n);
		char answer[1000], key[1000];
		scanf("%[^\n]%*c", answer);
		scanf("%[^\n]%*c", key);

		int correctAnswers = 0;
		for (int i = 0; i < n; i++)
		{
			if (answer[i] == key[i])
			{
				correctAnswers++;
			}
		}

		printf("Case #%d: ", t + 1);
		printf("%.0f\n", floor(((float)correctAnswers / (float)n) * 100.0));
	}

	return 0;
}