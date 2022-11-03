#include <stdio.h>

int main()
{
	int test;
	scanf("%d%*c", &test);
	for (int t = 0; t < test; t++)
	{
		int n;
		scanf("%d%*c", &n);
		char str[200];
		scanf("%[^\n]%*c", str);

		printf("Case #%d: ", t + 1);
		for (int i = 0; i < n; i++)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				printf("%c", str[i]);
			}
		}
		puts("");
	}
	return 0;
}