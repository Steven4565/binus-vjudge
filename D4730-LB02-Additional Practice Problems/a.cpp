#include <stdio.h>
int count = 0;

int foo(int x) {
	if (x == 3 || x == 4) count++;
	
	if (x <= 1) return x + 1;
	if (x % 3 == 0) return foo(x - (x/3)) + 1;
	return foo(x - 1) + x + foo(x - 2) + 1;
}

signed main() {
	int n;
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++) {
		int buffer;
		count = 0;
		scanf("%d", &buffer);
		
		int res = foo(buffer);
		printf("Case #%d: %d %d\n", i + 1, foo(buffer), count);
	}
	
}
