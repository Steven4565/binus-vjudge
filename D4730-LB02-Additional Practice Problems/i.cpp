#include <stdio.h>
#include <string.h>

#define di(x) printf("\t%d\n", x)

int main() {
	
	int test;
	scanf("%d", &test);
	
	for (int t = 0; t < test; t++) {
		int row, col;
		scanf("%d %d", &row, &col);
		
		int count = 0;
		int min = row < col ? row : col;
		for (int i = min; i >= 1; i--) {
			int horiz = row - i + 1;
			int vert = col - i + 1;
			int total = horiz * vert;
			count += total;
		}
		
		printf("Case #%d: %d\n", t + 1, count);
	}
	
	
	return 0;	
}
