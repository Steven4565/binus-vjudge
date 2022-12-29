#include <stdio.h>
#include <math.h>
#include <string.h>

void merge(double arr[], int l, int m, int r)
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

void mergeSort(double arr[], int l, int r)
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
		scanf("%d", &n);

		double arr[n];
		double sum = 0;
		for (int i = 0; i < n; i++)
		{
			scanf("%lf", &arr[i]);
			sum += arr[i];
		}

		mergeSort(arr, 0, n - 1);

		double mean = sum / n;
		double median;
		if (n % 2 == 1)
		{
			median = arr[n / 2];
		}
		else
		{
			median = (arr[n / 2] + arr[(n / 2) - 1]) / 2.0;
		}

		printf("Case #%d:\n", t + 1);
		printf("Mean : %.2lf\n", mean);
		printf("Median : %.2lf\n", median);
	}

	return 0;
}