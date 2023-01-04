#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

void merge(int arr[], int l, int m, int r)
{
	int i, j, k;
	int length1 = m - l + 1;
	int length2 = r - m;

	int L[length1], R[length2];

	for (i = 0; i < length1; i++)
		L[i] = arr[l + i];
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

void mergeSort(int arr[], int l, int r)
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

	int n;
	scanf("%d", &n);

	int arr[n];
	bool flag[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		flag[i] = false;
	}

	mergeSort(arr, 0, n - 1);

	int diff = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if (arr[i + 1] - arr[i] > diff)
		{
			diff = arr[i + 1] - arr[i];
		}
	}

	int printCount = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if (arr[i + 1] - arr[i] == diff)
		{
			if (printCount != 0)
				printf(" ");
			printf("%d %d", arr[i], arr[i + 1]);
			printCount++;
		}
	}

	puts("");

	return 0;
}
