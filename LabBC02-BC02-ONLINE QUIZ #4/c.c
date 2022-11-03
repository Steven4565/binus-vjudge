#include <stdio.h>

int main()
{
	int test;
	scanf("%d%*c", &test);
	for (int t = 0; t < test; t++)
	{
		int gojo, bipay;
		scanf("%d%d", &gojo, &bipay);
		printf("Case #%d: %s", t + 1, (gojo > bipay ? "Go-Jo\n" : "Bi-Pay\n"));
	}
	return 0;
}