#include <stdio.h>
#include <string.h>

typedef struct Entry
{
	char name[1001];
	int deadline;
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
		if (L[i].deadline < R[j].deadline || (L[i].deadline == R[j].deadline && strcmp(L[i].name, R[j].name) < 0))
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

Entry entries[101];

int main(int argc, char const *argv[])
{
	// FILE *handle = fopen("testdata.in", "r");

	int n;
	scanf(" %d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf(" %s %d", &entries[i].name, &entries[i].deadline);
	}

	mergeSort(entries, 0, n - 1);

	for (int i = 0; i < n; i++)
	{
		printf("%s\n", entries[i].name);
	}

	return 0;
}