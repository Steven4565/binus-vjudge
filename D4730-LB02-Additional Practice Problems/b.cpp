#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Entry {
	char name[100];
	int number;
};

void swap(struct Entry *a, struct Entry *b) {
	struct Entry temp = *a;
	*a = *b;
	*b = temp;
}

void sort(struct Entry arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
//			printf("%s %s\n", arr[j].name, arr[j + 1].name);
			if (arr[j].number > arr[j + 1].number || (arr[j].number == arr[j + 1].number && strcmp(arr[j].name, arr[j + 1].name) > 0)) {
//				puts("swapped");
				swap(&arr[j], &arr[j + 1]);
			}
		}
	}
}


int main() {
	int test;
	scanf("%d", &test);
	
	for (int t = 0; t < test; t++) {
		int n;
		scanf("%d", &n);
		
		struct Entry arr[n];
		
		for (int i = 0; i < n; i++) {
			scanf(" %[^#]#%d", arr[i].name, &arr[i].number);
		}
		sort(arr, n);
		
		printf("Case #%d:\n", t + 1);
		for (int i = 0; i < n; i++) {
			printf("%s - %d\n", arr[i].name, arr[i].number);
		}
	}	
	
}
