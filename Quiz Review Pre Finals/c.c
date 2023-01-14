#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <malloc.h>

void merge(int arr[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	int L[n1], R[n2];
	for (i = 0; i < n1; i++)
		L[i] = arr[i + l];
	for (j = 0; j < n2; j++)
		R[j] = arr[m + j + 1];

	i = 0;
	j = 0;
	k = l;

	while (i < n1 && j < n2)
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

	while (i < n1)
	{
		arr[k] = L[i];
		k++;
		i++;
	}

	while (j < n2)
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
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	mergeSort(arr, 0, n - 1);
	// for (int i = 0; i < n; i++)
	// 	printf("%d ", arr[i]);

	bool valid = false;

	for (int i = 2; n >= 3 && i < n; i++)
	{
		int buffer = arr[i - 1] + arr[i - 2];
		if (buffer > arr[i])
		{
			valid = true;
			break;
		}
	}

	printf("%s\n", (valid ? "YES" : "NO"));

	return 0;
}
