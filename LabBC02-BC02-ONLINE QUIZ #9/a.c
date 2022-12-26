#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

char shortMap[102][55];
char longMap[102][55];

int main(int argc, char const *argv[])
{
	FILE *handle = fopen("testdata.in", "r");
	int dictSize;
	fscanf(handle, "%d\n", &dictSize);

	for (int i = 0; i < dictSize; i++)
	{
		fscanf(handle, "%[^#]#%[^\n]\n", shortMap[i], longMap[i]);
	}

	int test;
	fscanf(handle, "%d%*c", &test);

	for (int t = 0; t < test; t++)
	{
		char buffer[110];
		fscanf(handle, "%[^\n]\n", buffer);

		printf("Case #%d:\n", t + 1);

		char *token = strtok(buffer, " ");
		while (token != NULL)
		{
			bool found = false;
			for (int i = 0; i < dictSize && !found; i++)
			{
				if (!strcmp(shortMap[i], token))
				{
					printf("%s", longMap[i]);
					found = true;
				}
			}
			printf("%s", (found ? "" : token));

			token = strtok(NULL, " ");

			if (token != NULL)
				printf(" ");
		}
		puts("");
	}

	fclose(handle);

	return 0;
}
