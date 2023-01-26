#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>


signed main() {
	
	int n;
	scanf("%n", &n);
	
	char arr[2000][20];
	int count[2000] = {0};
	int length = 0;
	for (int i = 0; i < n; i++) {
		char buffer[20];
		scanf("%[^\n]%*c", buffer);
	}
	
	int count = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (!strcmp(arr[i], arr[j])) count++;
		}
	}
	
	return 0;
}
