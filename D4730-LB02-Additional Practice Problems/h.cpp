#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

//#define int long long
#define pi(x) printf("\t%d\n", x)

void merge(int arr[], int l, int m, int r) {
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;
	
	int L[n1], R[n2];
	for(i = 0; i < n1; i++) 
		L[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];
		
	i = 0; j = 0;k = l;
	
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
		i++; k++;
	}
	
	while (j < n2) {
		arr[k] = R[j];
		j++; k++;
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

	int test;
	scanf("%d", &test);
	
	for(int t = 0; t < test; t++) {
		int n;
		scanf("%d", &n);
		
		int arr[n];
		
		for (int i = 0; i < n; i++) {
			scanf("%d", &arr[i]);

		}
		
		mergeSort(arr, 0, n - 1);
		
//		for (int i = 0; i < n; i++)
//			printf("\t%d\n", arr[i]);
		
		int map[100001];
		int count[100001] = {0};
		int length = 1;
		map[0] = arr[0];
		count[0] = 1;
		
		for (int i = 0; i < n; i++) {
			if (map[length - 1] == arr[i]) {
				count[length - 1]++;
			} else {
				map[length] = arr[i];
				count[length] = 1;
				length++;
			}
		}
		
		printf("Case #%d: %d\n", t + 1, length);
		
	}
	
}
