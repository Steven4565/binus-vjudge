#include <stdio.h>

void getInput()
{
	long long a, b;
	scanf("%lld %lld", &a, &b);
	printf("%lld\n", a + b);
}

int main()
{
	getInput();
	return 0;
}