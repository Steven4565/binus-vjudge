#include <stdio.h>
#include <string.h>

void merge(int arr[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	int L[n1], R[n2];

	for (i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];

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

int main(int argc, char const *argv[])
{

	int test;
	scanf("%d", &test);
	for (int t = 0; t < test; t++)
	{
		int n;
		scanf("%d", &n);

		int arr[n];
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &arr[i]);
		}

		int query;
		scanf("%d", &query);

		mergeSort(arr, 0, n - 1);
		printf("CASE #%d: ", t + 1);

		int resultIndex = -1;
		for (int i = 0; i < n; i++)
		{
			if (arr[i] == query)
			{
				resultIndex = i;
			}
		}

		if (resultIndex == -1)
		{
			printf("-1 -1\n");
		}
		else if (resultIndex == n - 1)
		{
			printf("%d %d\n", arr[resultIndex - 1], arr[resultIndex]);
		}
		else
		{
			printf("%d %d\n", arr[resultIndex], arr[resultIndex + 1]);
		}
	}

	return 0;
}
