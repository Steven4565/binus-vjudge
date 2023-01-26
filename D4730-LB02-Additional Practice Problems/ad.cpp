#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define int long long


//#include <iostream>
//#define debug(x) std::cout << "x: " << x << std::endl;

void merge(int arr[], int l, int m, int r) {
	int i, j, k;

	int n1 = m - l + 1;
	int n2 = r - m;
	
	int L[n1], R[n2];
	for(i = 0; i < n1; i++) 
		L[i] = arr[l + i];
	for(j = 0; j < n2; j++)
		R[j] = arr[j + 1 + m];
		
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
		i++;
		k++;
	}
	
	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}
}

void mergeSort(int arr[], int l, int r) {
	if (l < r) {
		int m = (l + r)/2;
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);
		merge(arr, l, m, r);
	}
}

signed main() {
	FILE* handle = fopen("testdata.in", "r");
	
	int n;
	fscanf(handle,"%lld", &n);
	
	int arr[n];
	for (int i = 0; i < n; i++) {
		fscanf(handle,"%lld", &arr[i]);
	}
	
	mergeSort(arr, 0, n - 1);
	
//	for(int i = 0; i < n; i++) {
//		printf("%lld\t", arr[i]);
//	}
	
	bool valid = false;
	for(int i = 2; i < n; i++) {
		if (arr[i - 2] + arr[i - 1] > arr[i]) {
			valid = true;
			break;
		}
	}
	
	puts(valid ? "YES" : "NO");
	
	fclose(handle);	
	return 0;
}
