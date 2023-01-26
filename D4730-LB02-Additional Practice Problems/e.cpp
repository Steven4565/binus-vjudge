#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
	int test;
	scanf("%d", &test);
	
	for (int t = 0; t < test; t++) {
		int n;
		scanf("%d", &n);
		int sum = 0;
		for (int i = 0; i < n; i++) {
			int buffer;
			scanf("%d", &buffer);
			sum += buffer;
		}
		
		printf("Case #%d: %d\n", t + 1, sum);
	}
}
