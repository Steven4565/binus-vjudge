#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define int long long
#define pi(x) printf("\t%lld\n", x)

void sort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for ( int j = 0; j < n - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
//				puts("swapped");
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

signed main() {
	int test;
	scanf("%lld", &test);
	
	
	for(int t = 0; t < test; t++) {
		int n;
		scanf("%lld", &n);
		int arr[n];
		for(int i = 0; i < n; i++) {
			scanf("%lld", &arr[i]);
		}
		
		sort(arr, n);
		
//		for (int i = 0; i < n; i++)
//			printf("\t%lld\n", arr[i]);
		
		int map[200];
		int mapCount[200] = {0};
		int count = 1;
		
		map[0] = arr[0];
		mapCount[0] = 1;
		
		for (int i = 1; i < n; i++) {
//			pi(arr[i]);
			if (arr[i] == map[count - 1]) {
//				puts("add");
				mapCount[count - 1]++;
			} else {
//				puts("new");
				map[count] = arr[i];
				mapCount[count]++;
				count++;
			}
		}
		
		int minIdx = 0;
		for(int i = 0; i < count; i++) {
//			pi(map[minIdx]);
			if (mapCount[i] > mapCount[minIdx]) {
				minIdx = i;
			}
		}
		
		printf("Case #%lld: %lld\n%lld\n", t + 1, mapCount[minIdx], map[minIdx]);
	}
	
}
