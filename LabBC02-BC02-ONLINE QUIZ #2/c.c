#include <stdio.h>
#include <math.h>

int main()
{
	long long wallet, price;

	scanf("%lld %lld", &wallet, &price);
	printf("%lld\n", wallet / price);

	return 0;
}