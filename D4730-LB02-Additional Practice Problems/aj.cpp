#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char gifts[1000][101];
int n;

int main() {
	
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		char buffer[101];
		int nth;
		scanf(" %s %d", buffer, &nth);
		strcpy(gifts[nth-1], buffer);
	}
	
	for (int i = 0; i < n; i++) {
		printf("Lecturer #%d: %s\n", i + 1, gifts[i]);
	}
	
	return 0;
}
