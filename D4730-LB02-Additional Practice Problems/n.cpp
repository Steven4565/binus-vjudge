#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define int long long
#define pi(x) printf("\t%lld\n", x)

signed main() {
	int test;
	scanf("%lld", &test);
	
	for (int t = 0; t < test; t++) {
		int n, m;
		scanf("%lld %lld", &n, &m);
		
		int arr[10];
		int buffer = 0;
		int total = 0;
		for (int i = 0; i < 10; i++) {
			arr[i] = buffer % 10;
			total += arr[i];
			buffer += m;
		}
		
		int divisions = n / m;
		int tens = divisions / 10;
		int remainder = divisions % 10;
		
		int sum = 0;
		sum += tens * total;
		for (int i = 0; i <= remainder; i++) {
			sum += arr[i];
		}
		
		printf("Case #%lld: %lld\n", t + 1, sum);
		
	}
	
	return 0;
}
