#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

#define int long long
#define pi(x) printf("\t%lld\n", x)

signed main() {
	
	int test;
	scanf("%lld", &test);
	
	
	for (int  t = 0; t < test; t++) {
		int a, b, c;
		scanf("%lld %lld %lld", &a, &b, &c);
		double first = b * log(a);
		double second = c;
		
		printf("Case #%lld: %c\n", t + 1, (first > second ? '>' : '<') );
	}
	
	return 0;
}
