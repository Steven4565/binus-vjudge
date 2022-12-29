#include <string.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct Entry
{
	char name[45];
	char latin[45];
} Entry;

int main()
{
	FILE *handle = fopen("testdata.in", "r");

	int n;
	fscanf(handle, "%d\n", &n);

	Entry entries[n];
	for (int i = 0; i < n; i++)
	{
		fscanf(handle, "%[^#]#%[^\n]\n", &entries[i].name, &entries[i].latin);
	}

	int qCount;
	fscanf(handle, "%d\n", &qCount);
	for (int t = 0; t < qCount; t++)
	{
		char buffer[50];
		fscanf(handle, "%[^\n]\n", buffer);

		int res = -1;
		for (int i = 0; i < n; i++)
		{
			if (strcmp(buffer, entries[i].name) == 0)
			{
				res = i;
				break;
			}
		}

		printf("Case #%d: %s\n", t + 1, (res == -1 ? "N/A" : entries[res].latin));
	}

	fclose(handle);

	return 0;
}