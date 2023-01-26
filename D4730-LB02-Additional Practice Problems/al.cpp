#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Entry {
	char id[30];
	char time[20];
	char place[300];
} arr[2000];

int main() {
	
	int n;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		scanf(" %s %s", arr[i].id, arr[i].time);
	}
	
	for (int i = 0; i < n; i++) {
		char id[30];
		char place[300];
		scanf(" %s %[^\n]", id, place);
		for (int j = 0; j < n; j++) {
			if (!strcmp(arr[j].id, id)) {
				strcpy(arr[j].place, place);
			}
		}
	}
	
	for (int i = 0; i < n; i++) {
		printf("%s %s %s\n", arr[i].id, arr[i].time, arr[i].place);
	}

	return 0;
}
