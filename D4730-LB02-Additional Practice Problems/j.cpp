#include <stdio.h>
#include <string.h>

#define int long long
#define di(x) printf("\t%lld\n", x)


signed main() {
	
	int test;
	scanf("%lld", &test);
	
	for (int t = 0; t < test; t++) {
		int n;
		scanf("%lld", &n);
		
		char arr[200];
		int length = 0;
		
		if (n == 0) {
			arr[0] = '0';
			length++;
		}
		while (n > 0) {
			arr[length] = (n % 2) + '0';
			length++;
			n /= 2;
		}
		
		
		printf("Case #%d: ", t + 1);
		
		for (int i = length - 1; i >= 0; i--) {
			printf("%c", arr[i]);
		}
		puts("");
	}
	
	return 0;
}
