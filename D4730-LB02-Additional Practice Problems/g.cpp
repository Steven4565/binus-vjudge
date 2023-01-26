#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

#define int long long
#define pi(x) printf("\t%lld\n", x)

signed main() {
	int test;
	scanf("%lld", &test);
	for (int t = 0; t < test; t++) {
		int n;
		scanf("%lld", &n);
		
		bool prime = true;
//		printf("\t%f\n", sqrt(n));
		for (int i = 2; i < sqrt(n) + 1; i++) {
//			pi(i);
			if (!(n % i) && i != n) {
//				puts("no");
				prime = false;
				break;
			}
		}
		
		if (n < 2) prime = false;
		printf("Case #%lld: %s\n", t + 1, (prime ? "prime" : "not prime"));
	}
	
	
}
