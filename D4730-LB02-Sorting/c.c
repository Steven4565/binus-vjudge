#include <stdio.h>
#include <string.h>

typedef struct Entry
{
	char num[15];
	char name[50];
} Entry;

void merge(Entry arr[], int l, int m, int r)
{
	int i, j, k;
	int length1 = m - l + 1;
	int length2 = r - m;

	Entry L[length1], R[length2];

	for (i = 0; i < length1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < length2; j++)
		R[j] = arr[m + 1 + j];

	i = 0;
	j = 0;
	k = l;
	while (i < length1 && j < length2)
	{
		if (strcmp(L[i].num, R[j].num) < 0)
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < length1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}

	while (j < length2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}

void mergeSort(Entry arr[], int l, int r)
{
	if (l < r)
	{
		int m = l + (r - l) / 2;

		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);

		merge(arr, l, m, r);
	}
}

int main(int argc, char const *argv[])
{
	FILE *file = fopen("testdata.in", "r");

	int n;
	fscanf(file, "%d%*c", &n);

	Entry entries[n];
	for (int i = 0; i < n; i++)
	{
		fscanf(file, "%s %[^\n]%*c", &entries[i].num, &entries[i].name);
	}

	mergeSort(entries, 0, n - 1);

	for (int i = 0; i < n; i++)
	{
		printf("%s %s\n", entries[i].num, entries[i].name);
	}

	fclose(file);

	return 0;
}