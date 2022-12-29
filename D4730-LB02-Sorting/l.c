#include <stdio.h>
#include <math.h>
#include <string.h>

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

int search(int arr[], int l, int r, int x)
{
	if (r >= l)
	{
		int mid = l + (r - l) / 2;

		if (arr[mid] == x)
			return mid;

		if (arr[mid] > x)
			return search(arr, l, mid - 1, x);

		return search(arr, mid + 1, r, x);
	}

	return -1;
}

int main()
{
	int n;
	scanf("%d", &n);

	int arr[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	mergeSort(arr, 0, n - 1);

	int inputs;
	scanf("%d", &inputs);
	for (int i = 0; i < inputs; i++)
	{
		int query;
		scanf("%d", &query);
		int results = search(arr, 0, n - 1, query);
		printf("%d\n", (results == -1 ? -1 : results + 1));
	}

	return 0;
}