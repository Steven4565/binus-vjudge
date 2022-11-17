#include <stdio.h>
#include <string.h>
#include <ctype.h>

char getChar(char input)
{
	if (!isalpha(input))
		return input;

	char upper = toupper(input);
	switch (upper)
	{
	case 'I':
		return '1';
	case 'R':
		return '2';
	case 'E':
		return '3';
	case 'A':
		return '4';
	case 'S':
		return '5';
	case 'G':
		return '6';
	case 'T':
		return '7';
	case 'B':
		return '8';
	case 'P':
		return '9';
	case 'O':
		return '0';
	default:
		return upper;
	}
}

int main()
{
	char str[20000];
	scanf("%[^\n]%*c", str);

	int length = strlen(str);
	for (int i = 0; i < length; i++)
	{
		printf("%c", getChar(str[i]));
	}

	puts("");

	return 0;
}