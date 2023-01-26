#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define int long long

int m;
int a[100001];
int b[100001];
int c[100001];
int n[100001];

int calculate(int i, int x) {
	return a[i] * x * x * x + b[i] * x * x + c * x;
}

bool check(int i, int x) {
	return calculate(i, x) <= n[i];
}

signed main() {
	
	scanf("%lld", &m);	
	for(int i = 0; i < m; i++) 
		scanf("%lld", &a[i]);
	for(int i = 0; i < m; i++) 
		scanf("%lld", &b[i]);
	for(int i = 0; i < m; i++) 
		scanf("%lld", &c[i]);
	for(int i = 0; i < m; i++) 
		scanf("%lld", &n[i]);
		
	
	
	return 0;
}
