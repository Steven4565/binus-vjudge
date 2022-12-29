#include <string.h>
#include <stdio.h>
#include <stdbool.h>

char convert(int shift, char input)
{
	switch (input)
	{
	case '0':
		input = 'O';
		break;
	case '1':
		input = 'I';
		break;
	case '3':
		input = 'E';
		break;
	case '4':
		input = 'A';
		break;
	case '5':
		input = 'S';
		break;
	case '6':
		input = 'G';
		break;
	case '7':
		input = 'T';
		break;
	case '8':
		input = 'B';
		break;
	case ' ':
		return input;
	}

	char result = (input - 'A') - (shift % 26);
	if (result < 0)
		result += 26;
	return result + 'A';
}

int main()
{
	FILE *handle = fopen("testdata.in", "r");

	int test;
	fscanf(handle, "%d\n", &test);

	for (int t = 0; t < test; t++)
	{
		int shift;
		fscanf(handle, "%d\n", &shift);

		char input[1001];
		fscanf(handle, "%[^\n]\n", input);

		printf("Case #%d: ", t + 1);
		int length = strlen(input);
		for (int i = 0; i < length; i++)
		{
			printf("%c", convert(shift, input[i]));
		}
		puts("");
	}

	fclose(handle);

	return 0;
}