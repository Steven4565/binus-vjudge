#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

signed main() {
	
	int test;
	scanf("%d", &test);
	for(int t = 0; t < test; t++) {
		int n;
		scanf("%d", &n);
		
		int factors = 0;
		double rt = sqrt(n);
		for (int i = 1; i < rt; i++) {
			if (!(n % i)) {
				factors += 2;
			}
		}
		
		if (floor(rt) == ceil(rt)) {
			factors++;
		}
		
		printf("Case #%d: %d\n", t + 1, factors);
	}
	
	return 0;
}
