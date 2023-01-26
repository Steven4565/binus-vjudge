#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

#define pi(x) printf("\t%lld\n", x)
#define int long long

struct Entry {
	char code[200];
	char name[200];
	long long price;
} arr[50000];

signed main() {
	int n;
	scanf("%lld%*c", &n);
	
//	int price[100000];
//	int priceCount = 0;
	
	for (int i = 0; i < n; i++) {
		scanf("%[^\n]%*c", &arr[i].code);
		scanf("%[^\n]%*c", &arr[i].name);
		scanf("%lld%*c", &arr[i].price);
	}
	
	int medianPrice;
	if (n % 2 == 0) {
		medianPrice = (arr[n/2].price + arr[n/2-1].price)/2;
	} else {
		medianPrice = arr[n/2].price;
	}
//	pi(medianPrice);
	
	for (int i = 0; i < n; i++) {
		if (arr[i].price >= medianPrice)
			printf("%s %s\n", arr[i].code, arr[i].name);
	} 
	
	return 0;
}

