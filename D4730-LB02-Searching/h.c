#include <stdio.h>

void merge(long long arr[], int l, int m, int r)
{
	int i, j, k;
	int length1 = m - l + 1;
	int length2 = r - m;

	long long L[length1], R[length2];

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

void mergeSort(long long arr[], int l, int r)
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

	long long arr[n];
	for (int i = 0; i < n; i++)
		scanf("%lld", &arr[i]);

	mergeSort(arr, 0, n - 1);

	long long min;
	scanf("%lld", &min);

	int count = 0;
	for (int i = 0; i < n; i++)
		if (arr[i] <= min)
		{
			count++;
			min -= arr[i];
		}

	printf("%d\n", count);

	return 0;
}