#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

#define int long long
#define pi(x) printf("\t%lld\n", x)

signed main() {

	int test;
	scanf("%lld", &test);
	
	for (int  t= 0; t < test; t++) {
		int n;
		scanf("%lld", &n);
		int sum = 0;
		
		for (int i = 0; i < n; i++) {
			sum += (i + 1) * (n - i) - i;
		}
		
		printf("Case #%lld: %lld\n", t + 1, sum);
	}

	return 0;	
}
