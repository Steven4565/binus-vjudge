#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <malloc.h>

bool isVowel(char n)
{
	switch (n)
	{
	case 'a':
	case 'i':
	case 'u':
	case 'e':
	case 'o':
	case 'A':
	case 'I':
	case 'U':
	case 'E':
	case 'O':
		return true;
	}

	return false;
}

int main()
{

	int test;
	scanf("%d%*c", &test);

	for (int t = 0; t < test; t++)
	{
		char buffer[1001];
		scanf("%[^\n]%*c", buffer);

		printf("Case #%d: ", t + 1);

		int length = strlen(buffer);
		for (int i = 0; i < length; i++)
		{
			if (!isVowel(buffer[i]))
				printf("%c", buffer[i]);
		}
		puts("");
	}

	return 0;
}
