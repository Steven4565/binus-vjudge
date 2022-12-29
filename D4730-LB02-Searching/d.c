#include <stdio.h>
#include <string.h>

typedef struct Entry
{
	char name[11];
	int score;
} Entry;

int search(Entry arr[], int l, int r, char *x)
{
	if (r >= l)
	{
		int mid = l + (r - l) / 2;

		if (strcmp(arr[mid].name, x) == 0)
			return mid;

		if (strcmp(arr[mid].name, x) < 0)
			return search(arr, l, mid - 1, x);

		return search(arr, mid + 1, r, x);
	}
	return -1;
}

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
		if (L[i].score > R[j].score || (L[i].score == R[j].score && strcmp(L[i].name, R[j].name) < 0))
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

int main()
{

	int test;
	scanf("%d", &test);

	for (int t = 0; t < test; t++)
	{
		int n;
		scanf(" %d", &n);

		Entry entries[n];

		for (int i = 0; i < n; i++)
		{
			scanf(" %[^#]#%d", entries[i].name, &entries[i].score);
		}

		mergeSort(entries, 0, n - 1);

		char query[11];
		scanf(" %s", query);

		int result;
		for (int i = 0; i < n; i++)
		{
			if (strcmp(query, entries[i].name) == 0)
			{
				result = i;
			}
		}

		printf("Case #%d: %d\n", t + 1, result + 1);
	}

	return 0;
}