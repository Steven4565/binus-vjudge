#include <stdio.h>
#include <stdbool.h>
#include <string.h>

//#include <iostream>
#define int long long



//#define debug(x) std::cout << "x: " << x << std::endl;

signed main() {
	FILE *handle = fopen("testdata.in", "r");
	
	int n, m;
	fscanf(handle, "%lld %lld\n", &n, &m);
	
	char lines[m][100];
	for(int i = 0; i < m; i++) {
		fgets(lines[i], 51, handle);
	}	

	int x;
	fscanf(handle, " %lld", &x);
	
	
	bool printed = false;
	int counter = 1;
	for(int i = 0; i < m; i++) {
		if (lines[i][0] == '#') {
			counter++;	
			continue;
		}
		
		if (counter == x) {
//			printf("%d", lines[i][0]);
						
			printf("%s", lines[i]);
			printed = true;
		}
	}
	
	if (!printed) puts("");
	puts("");
	
	fclose(handle);	
	return 0;
}

