#include <stdbool.h>
#include <math.h>
#include <stdio.h>

void play(long long n, bool *turn)
{
	while (n % 4 == 0)
	{
		n /= 4;
	}

	*turn = !(*turn);
	if (n <= 1)
		return;

	play((n % 2 == 0 ? n / 2 : n * 3 + 1), turn);
}

int main(int argc, char const *argv[])
{
	int test;
	scanf("%d", &test);

	for (int t = 0; t < test; t++)
	{
		long long n;
		scanf("%lld", &n);
		bool isJojoTurn = true;
		play(n, &isJojoTurn);
		printf("Case #%d: %s\n", t + 1, isJojoTurn ? "Jojo" : "Lili");
	}

	return 0;
}