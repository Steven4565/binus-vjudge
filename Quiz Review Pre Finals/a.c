#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <malloc.h>

int getSum(char *str)
{
	int length = strlen(str);
	int sum = 0;

	for (int i = 0; i < length; i++)
	{
		if (isalpha(str[i]))
		{
			sum += tolower(str[i]) - 'a' + 1;
		}
	}
	return sum;
}

int main()
{

	int hour;
	char digit1, digit2;
	char sentence[100001];

	int code[2];

	for (int t = 0; t < 2; t++)
	{

		scanf("%d:%c%c>%[^\n]%*c", &hour, &digit1, &digit2, sentence);

		int word1Index = digit1 - '0';
		int word2Index = digit2 - '0';
		int multiplier = (hour > 12 || (hour == 12 && word1Index + word2Index != 0) ? -1 : 1);

		int sum = 0;

		char delim[2] = " ";
		char *token = strtok(sentence, delim);
		int i = 0;
		while (token != NULL)
		{
			if (i == word1Index || i == word2Index)
			{
				// printf("token: %s\n", token);
				sum += getSum(token);
			}

			i++;
			token = strtok(NULL, delim);
		}
		if (word1Index == word2Index)
			sum *= 2;
		sum %= 180;
		sum *= multiplier;
		code[t] = sum;
	}

	printf("Case #1: %d, %d", code[0], code[1]);

	return 0;
}
