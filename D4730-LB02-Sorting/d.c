#include <stdio.h>
#include <string.h>

struct entry
{
	char name[1001];
	char author[1001];
	int views;
} entries[101];

void merge(struct entry arr[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	struct entry L[n1], R[n2];

	for (i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];

	i = 0;
	j = 0;
	k = l;
	while (i < n1 && j < n2)
	{
		if (L[i].views > R[j].views)
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

	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}

	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}

void mergeSort(struct entry arr[], int l, int r)
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
	FILE *handle = fopen("testdata.in", "r");

	int length = 0;
	while (!feof(handle))
	{
		fscanf(handle, "%[^#]#%[^#]#%d\n", entries[length].name, entries[length].author, &entries[length].views);
		length++;
	}
	mergeSort(entries, 0, length - 1);
	for (int i = 0; i < length; i++)
	{
		printf("%s by %s - %d\n", entries[i].name, entries[i].author, entries[i].views);
	}

	fclose(handle);
	return 0;
}
