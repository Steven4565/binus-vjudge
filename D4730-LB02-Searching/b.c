#include <stdio.h>
#include <string.h>

typedef struct Entry
{
	char name[21];
	char num[21];
} Entry;

int search(Entry arr[], int l, int r, char *x)
{
	if (r >= l)
	{
		int mid = l + (r - l) / 2;

		if (strcmp(arr[mid].num, x) == 0)
			return mid;

		if (strcmp(arr[mid].num, x) > 0)
			return search(arr, l, mid - 1, x);

		return search(arr, mid + 1, r, x);
	}
	return -1;
}

int main()
{
	FILE *handle = fopen("testdata.in", "r");

	int entryCount;
	fscanf(handle, "%d\n", &entryCount);
	Entry entries[entryCount];

	for (int i = 0; i < entryCount; i++)
	{
		fscanf(handle, "%s %[^\n]\n", &entries[i].num, &entries[i].name);
	}

	int test;
	fscanf(handle, "%d\n", &test);

	for (int t = 0; t < test; t++)
	{
		char query[21];
		fscanf(handle, "%[^\n]\n", &query);

		int res = search(entries, 0, entryCount - 1, query);
		printf("Case #%d: %s\n", t + 1, (res == -1 ? "N/A" : entries[res].name));
	}

	fclose(handle);
	return 0;
}