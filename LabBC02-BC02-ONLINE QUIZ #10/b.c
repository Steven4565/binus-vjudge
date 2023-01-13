#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
	FILE *handle = fopen("testdata.in", "r");

	int test;
	fscanf(handle, "%d\n", &test);

	for (int t = 0; t < test; t++)
	{
		char input[101];

		// get the full string
		fscanf(handle, "%[^\n]\n", &input);
		int length = strlen(input);

		int queries;
		fscanf(handle, "%d\n", &queries);

		// map to track which characters has been changed
		bool sourcesChanged[26] = {0};

		for (int i = 0; i < queries; i++)
		{
			// get the input
			char source, dest;
			fscanf(handle, "%c %c\n", &source, &dest);

			// if character has already been changed, skip
			if (sourcesChanged[source - 'A'])
				continue;
			sourcesChanged[source - 'A'] = true;

			// change every occurance of string
			for (int i = 0; i < length; i++)
				if (input[i] == source)
					input[i] = dest;
		}

		// count the letters
		int count[26] = {0};
		for (int i = 0; i < length; i++)
			count[input[i] - 'A']++;

		// print it out
		for (int i = 0; i < 26; i++)
			if (count[i])
				printf("%c %d\n", i + 'A', count[i]);
	}

	fclose(handle);

	return 0;
}