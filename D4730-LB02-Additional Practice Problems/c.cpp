#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define int long long

signed main() {
	int a, b;
	scanf("%lld %lld", &a, &b);
	
	int sum = 0;
	for (int i = a; i <= b; i++) {
		sum += i;
	}
	
	printf("%lld\n", sum);
	
}
