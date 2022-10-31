#include <stdio.h>
#include <math.h>

int main()
{
	int test;
	scanf("%d", &test);

	for (int t = 0; t < test; t++)
	{
		int menuNum, wallet;
		scanf("%d %d", &menuNum, &wallet);

		long long sum = 0;
		for (int i = 0; i < menuNum; i++)
		{
			long long buffer;
			scanf("%lld", &buffer);
			sum += buffer;
		}

		printf("Case #%d: ", t + 1);
		// printf("%lld", sum);
		printf("%s\n", (sum > wallet ? "Wash dishes" : "No worries"));
	}

	return 0;
}

// n + ceil(n)   - 1 (n = 2)
// n + ceil(n/2) - 1 (n = 3)
// n + ceil(n/3) - 1 (n = 4)
// n + ceil(n/4) - 1 (n = 5)
