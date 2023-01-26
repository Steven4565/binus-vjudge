#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int n;
char str[100];
char arr[100][100];
char arrRev[100][100];

void swap(char *a, char *b) {
	char temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	
	scanf("%d", &n);
	scanf(" %s", str);
	int length = strlen(str);
	
	
	for (int i = 0; i < n; i++) {
		scanf(" %s", arr[i]);
	}
	
	bool valid = false;
	// horizontal
	for (int i = 0; i < n; i++) {
		if (strstr(arr[i], str) != NULL) {
			valid = true; break;
		}
	}
	
	// reverse matrix
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n / 2; j++) {
			swap(&arr[i][j], &arr[i][n - 1 - j]);
		}
	}
	
	// horizontal rev
	for (int i = 0; i < n; i++) {
		if (strstr(arr[i], str) != NULL) {
			valid = true; break;
		}
	}
	
	// transpose matrix
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arrRev[i][j] = arr[n-1-j][i];
		}
	}
	
	// vertical
	for (int i = 0; i < n; i++) {
		if (strstr(arrRev[i], str) != NULL) {
			valid = true; break;
		}
	}
	
	// reverse matrix
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n / 2; j++) {
			swap(&arrRev[i][j], &arrRev[i][n - 1 - j]);
		}
	}
	
	// vertical Reverse
	for (int i = 0; i < n; i++) {
		if (strstr(arrRev[i], str) != NULL) {
			valid = true; break;
		}
	}

	
	printf("%s\n", (valid ? "YES" : "NO")); 
	
	
	
	return 0;
}

