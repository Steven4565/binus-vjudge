#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

#define pi(x) printf("\t%lld\n", x)


struct Entry {
	char code[200];
	char day[200];
	int time;
} arr[2000];

int main() {
	int n;
	scanf("%d%*c", &n);
	
	for (int i = 0; i < n; i++) {
		scanf("%[^\n]%*c", &arr[i].code);
		scanf("%[^\n]%*c", &arr[i].day);
		scanf("%d%*c", &arr[i].time);
	}
	
	int q;
	scanf("%d%*c", &q);
	
	for (int i = 0; i < q; i++) {
		int buffer;
		scanf("%d%*c", &buffer);
		printf("Query #%d:\n", i + 1);
		printf("Code: %s\n", arr[buffer-1].code);		
		printf("Day: %s\n", arr[buffer-1].day);
		printf("Time: %02d:00\n", arr[buffer-1].time);
	}
	
	return 0;
}
