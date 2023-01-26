#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define int long long

int arr[100005];
int count[100005] = {0};
int arrCount = 1;

int search(int l, int r, int x) {
	if (l <= r) {
		int m = (l + r) / 2;
		if (arr[m] == x) return m;
		
		if (arr[m] > x) return search(l, m - 1, x);
		return search(m + 1, r, x);
	}
	return -1;
}

signed main() {
	int n, q;
	scanf("%lld %lld", &n, &q);
	
	scanf("%lld", &arr[0]);
	count[0]++;
	
	for (int i = 1; i < n; i++) {
		int buffer;
		scanf("%lld", &buffer);
		
		if (arr[arrCount-1] == buffer) {
			count[arrCount-1]++;
		}
		else {
			arr[arrCount] = buffer;
			count[arrCount] ++;
			arrCount++;
		}
	}
	
	
	for (int i = 0; i < q; i++) {
		int buffer;
		scanf("%lld", &buffer);

		int res = search(0, arrCount - 1, buffer);
		printf("%lld\n", (res == -1 ? 0 : count[res]));
	}
	
	
	return 0;
}
