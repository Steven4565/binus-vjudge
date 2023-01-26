#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

#define pi(x) printf("\t%lld\n", x)


struct Entry {
	char id[200];
	char name[200];
	char score[10];
} arr[2000];

int main() {
	int n;
	scanf("%d%*c", &n);
	
	for (int i = 0; i < n; i++) {
		scanf("%[^\n]%*c", &arr[i].id);
		scanf("%[^\n]%*c", &arr[i].name);
		scanf("%[^\n]%*c", &arr[i].score);
	}
	
	int q;
	scanf("%d%*c", &q);
	
	for (int i = 0; i < q; i++) {
		int buffer;
		scanf("%d%*c", &buffer);
		printf("Query #%d:\n", i + 1);
		printf("ID: %s\n", arr[buffer-1].id);		
		printf("Name: %s\n", arr[buffer-1].name);
		printf("Score: %s\n", arr[buffer-1].score);
	}
	
	return 0;
}
