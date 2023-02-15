#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
	
	int test;
	scanf("%d", &test);
	
	for(int t = 0; t < test;t ++) {
		char str[1000000];
		scanf(" %s", str);
		int length = strlen(str);
		
		int odd = 0;
		int even = 0;
		for ( int i = 0; i < length; i++) {
			if (!(i%2)) {
				even += str[i] - '0';
			} else {
				odd += str[i] - '0';
			}
		}
		
		int diff = even - odd;
		int res = diff % 11;
		printf("Case #%d: %s\n", t + 1, (res == 0 ? "Yeah" : "Nah"));
	}
	
	return 0;
}
