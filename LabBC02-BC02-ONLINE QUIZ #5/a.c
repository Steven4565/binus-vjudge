#include <stdio.h>
#include <math.h>

int getMaxDrinks(int drinkCount, int bottles, int exchange)
{
	if (bottles == 0)
		return drinkCount;
	int bottlesExchanged = bottles / exchange;

	int bottlesDrank;
	if (bottlesExchanged == 0)
	{
		bottlesDrank = bottles;
	}
	else
	{
		bottlesDrank = bottlesExchanged * exchange;
	}
	return getMaxDrinks(drinkCount + bottlesDrank, (bottles - bottlesDrank) + bottlesExchanged, exchange);
}

int main()
{
	int test;
	scanf("%d", &test);

	for (int t = 0; t < test; t++)
	{
		int bottles, exchange;
		scanf("%d %d", &bottles, &exchange);

		printf("Case #%d: ", t + 1);
		printf("%d\n", getMaxDrinks(0, bottles, exchange));
	}

	return 0;
}