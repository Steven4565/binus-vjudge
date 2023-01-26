#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define int long long


//#include <iostream>
//#define debug(x) std::cout << "x: " << x << std::endl;

signed main() {
	
	FILE* handle = fopen("testdata.in", "r");
	
	int n;
	fscanf(handle, "%lld", &n);
	
	char str[100000];
	fscanf(handle, "%s", &str);
	
	char *delim = "0";
	char *token = strtok(str, delim);
	int max = strlen(token);
	while (token != NULL) {
		max = (strlen(token) > max ? strlen(token) : max);
		token = strtok(NULL, delim);
	}
	
	printf("%lld\n", max);
	
	fclose(handle);
	return 0;
}
