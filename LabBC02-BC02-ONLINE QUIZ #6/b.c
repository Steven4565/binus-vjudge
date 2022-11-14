#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>

void convertBin(long long n, char *buffer)
{

	if (n == 0)
	{
		strcat(buffer, "0");
		return;
	}
	while (n != 0)
	{
		char charBuffer = '0' + n % 2;
		n /= 2;
		strncat(buffer, &charBuffer, 1);
	}
}

int main()
{
	long long test;
	scanf("%lld", &test);

	for (long long t = 0; t < test; t++)
	{
		long long n;
		char buffer[100] = "";
		scanf("%lld", &n);
		convertBin(n, buffer);

		long long length = strlen(buffer);
		printf("Case #%lld: ", t + 1);
		for (long long i = length - 1; i >= 0; i--)
		{
			printf("%c", buffer[i]);
		}
		puts("");
	}

	return 0;
}