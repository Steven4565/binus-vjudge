#include <stdio.h>
#include <string.h>
//#include <iostream>a

#define int long long
//#define debug(x) std::cout << "x: " << x << std::endl;


signed main() {
	FILE* handle = fopen("testdata.in", "r");
	
	int n;
	fscanf(handle, "%lld", &n);
	
	for(int i = 0; i < n; i++) {
		char buffer[300];
		fscanf(handle, " %s", &buffer);
		int length = strlen(buffer);
		int sum = 0;
		
		for(int j = 0; j < length; j++) {
			sum += buffer[j] - '0';
		}
//		debug(sum);
		
		printf("Case #%lld: %s\n", i + 1, (sum % 3  == 0 && buffer[length-1] % 2 == 0 ? "YES" : "NO"));
	}
	
	fclose(handle);
}
