#include <stdio.h>

int recurse(int m, int n)
{
	if (m == 0)
		return n + 1;
	else if (m > 0 && n == 0)
		return recurse(m - 1, 1);
	else if (m > 0 && n > 0)
		return recurse(m - 1, recurse(m, n - 1));
}

int main(int argc, char const *argv[])
{
	int m, n;
	scanf("%d %d", &m, &n);

	printf("result: %d\n", recurse(m, n));

	return 0;
}
