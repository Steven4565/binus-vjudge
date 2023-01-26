#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define int long long

int arr[100005];
int arrCount = 1;

void merge (int arr[], int l, int m, int r) {
	int i, j, k; 
	int n1 = m - l + 1;
	int n2 = r - m;
	
	int L[n1], R[n2];
	for (i = 0; i < n1; i++) 
		L[i] = arr[i + l];
	for (j = 0; j < n2; j++)
		R[j] = arr[j + m + 1];

	i = 0;
	j = 0;
	k = l;
	
	while (i < n1 && j < n2) {
		if (L[i] < R[j]) {
			arr[k] = L[i];
			i++;
		} else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	
	while (i < n1) {
		arr[k] = L[i];
		k++; i++;
	}
	
	while (j < n2) {
		arr[k] = R[j];
		k++; j++;
	}
}

void mergeSort(int arr[], int l, int r) {
	if (l < r) {
		int m = (l + r) / 2;
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);
		merge(arr, l, m, r);
	}
}

signed main() {
	int n;
	scanf("%lld", &n);
	
	int arr[n];
	for (int i = 0; i < n; i++) {
		scanf("%lld", &arr[i]);
	}
	
	mergeSort(arr, 0, n - 1);

//	for(int i = 0; i < n; i++) {
//		printf("%lld", arr[i]);
//	}
	
	int uniqueArr[100000];
	int count = 1;	
	uniqueArr[0] = arr[0];
	
	for (int i = 1; i < n; i++) {
//		printf("%lld %lld\n", arr[i], uniqueArr[count-1]);
		if (arr[i] != uniqueArr[count-1]) {
			uniqueArr[count] = arr[i];
			count++;
		}
	}
	
	printf("%lld\n", count);
	
	return 0;
}
