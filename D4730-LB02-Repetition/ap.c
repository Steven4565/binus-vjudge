#include <stdio.h>

int main()
{
	int test;
	scanf("%d", &test);

	for (int t = 0; t < test; t++)
	{
		printf("Case #%d: ", t + 1);

		long long n, k;
		scanf("%lld", &n);
		scanf("%lld", &k);

		while (scanf("%*[\n]"))
			;

		char str[1000];
		scanf("%[^\n]%*c", str);

		for (int i = 0; i < n; i++)
		{
			int newChar = (str[i] + (k % 26));
			newChar = newChar > 'z' ? newChar - 26 : newChar;
			printf("%c", newChar);
		}

		printf("\n");
	}

	return 0;
}