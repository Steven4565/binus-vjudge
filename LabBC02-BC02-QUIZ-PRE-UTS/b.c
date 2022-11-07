#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// help, the test case does not work

int main()
{

	int test;
	scanf("%d%*c", &test);
	printf("%d\n", test);

	for (int t = 0; t < test; t++)
	{
		int charCount1[300];
		int charCount2[300];

		int letterDiff = 0;

		// Initialize array
		for (int i = 0; i < 300; i++)
		{
			charCount1[i] = 0;
			charCount2[i] = 0;
		}

		char str1[300];
		scanf("%[^\n]%*c", str1);
		int length1 = strlen(str1);
		for (int i = 0; i < length1; i++)
		{
			charCount1[(int)(str1[i])]++;
			// printf("char: %c | count: %d\n", str1[i], charCount1[(int)str1[i]]);
		}

		char str2[300];
		scanf("%[^\n]%*c", str2);
		int length2 = strlen(str2);
		for (int i = 0; i < length2; i++)
		{
			charCount2[(int)(str2[i])]++;
			// printf("char: %c | count: %d\n", str2[i], charCount2[(int)str2[i]]);
		}

		for (int i = 0; i < 300; i++)
		{
			if (charCount1[i] != charCount2[i])
			{
				letterDiff += abs(charCount1[i] - charCount2[i]);
				// printf("char: %c | count: %d\n", (char)i, abs(charCount1[i] - charCount2[i]));
			}
		}
		printf("Test %d: ", t + 1);

		if (letterDiff == length1 + length2)
		{
			printf("Anagram not found!\n");
		}
		else
		{
			printf("%d\n", letterDiff);
		}
	}

	return 0;
}