#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>

void convert(char *input)
{
	if ((*input) > 90)
	{
		*input = toupper(*input);
	}
	else
	{
		*input = tolower(*input);
	}
}

int main()
{
	int length, inputs;
	scanf("%d %d%*c", &length, &inputs);
	char str[300];
	scanf("%[^\n]%*c", str);

	for (int i = 0; i < inputs; i++)
	{
		int buffer;
		scanf("%d%*c", &buffer);
		convert(&str[buffer]);
	}

	printf("%s\n", str);

	return 0;
}