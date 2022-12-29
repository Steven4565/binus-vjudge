#include <stdio.h>
#include <malloc.h>
#include <string.h>

void merge(char arr[], int l, int m, int r)
{
	int i, j, k;
	int length1 = m - l + 1;
	int length2 = r - m;

	char L[length1], R[length2];

	for (i = 0; i < length1; i++)
	{
		L[i] = arr[l + i];
	}
	for (j = 0; j < length2; j++)
		R[j] = arr[m + 1 + j];

	i = 0;
	j = 0;
	k = l;
	while (i < length1 && j < length2)
	{
		if (L[i] < R[j])
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

void mergeSort(char arr[], int l, int r)
{
	if (l < r)
	{
		int m = l + (r - l) / 2;

		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);

		merge(arr, l, m, r);
	}
}

void mergeString(char **arr, int l, int m, int r)
{
	int i, j, k;
	int length1 = m - l + 1;
	int length2 = r - m;

	char *L[length1], *R[length2];

	for (i = 0; i < length1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < length2; j++)
		R[j] = arr[m + 1 + j];

	i = 0;
	j = 0;
	k = l;
	while (i < length1 && j < length2)
	{
		if (strcmp(L[i], R[j]) > 0)
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

void mergeSortString(char *arr[], int l, int r)
{
	if (l < r)
	{
		int m = l + (r - l) / 2;

		mergeSortString(arr, l, m);
		mergeSortString(arr, m + 1, r);

		mergeString(arr, l, m, r);
	}
}

int main()
{
	int row, column;
	scanf("%d %d", &row, &column);

	char *arr[row];

	for (int i = 0; i < row; i++)
	{
		arr[i] = (char *)malloc(sizeof(char) * (column + 2));
		scanf("%s", arr[i]);
	}

	for (int i = 0; i < row; i++)
	{
		mergeSort(arr[i], 0, column - 1);
	}

	mergeSortString(arr, 0, row - 1);

	for (int i = 0; i < row; i++)
	{
		puts(arr[i]);
	}

	return 0;
}