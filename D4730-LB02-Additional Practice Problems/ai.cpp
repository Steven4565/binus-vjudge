#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define int long long

struct Name {
	char name[1001];
	int length;
};

signed main() {
	FILE *handle = fopen("testdata.in", "r");
	
	int test;
	fscanf(handle, " %lld", &test);
	
	for(int t = 0; t < test; t++) {
		int n;
		fscanf(handle, " %lld", &n);
		
		struct Name arr[n];
		int min = 1000000;
		for (int i = 0; i < n; i++) {
			fscanf(handle, " %[^\n]", arr[i].name);
			arr[i].length = strlen(arr[i].name);
//			printf("length: %d\n", arr[i].length);
			if (arr[i].length < min) min = arr[i].length;
		}
		
		printf("Case #%lld: ", t + 1);
		
		// prefix
		for (int i = 0; i < min; i++) {
			bool sameLetter = true;
			for (int j = 0; j < n; j++) {
				if (arr[j].name[i] != arr[0].name[i]) {
					
					sameLetter = false;
					break;
				}
			}
			if (sameLetter) printf("%c", arr[0].name[i]);
			else break;
		}
		
		// suffix
		int index = -1;
		for (int i = 0; i < min; i++) {
			bool sameLetter = true;
			for (int j = 0; j < n; j++) {
				int varLength = arr[j].length - 1 - i;
				int baseLength = arr[0].length - 1 - i;
//				printf("%d %c %d %c\n", arr[j].length, arr[j].name[varLength], arr[0].length, arr[0].name[baseLength]);
				if (arr[j].name[varLength] != arr[0].name[baseLength]) {
					sameLetter = false;
					break;
				}
			}
			if (sameLetter) index++;
			else break;
		}
		
//		printf("index: %d\n", index);
		
		for (int i = arr[0].length - 1 - index; index != -1 && i < arr[0].length; i++) {
			printf("%c", arr[0].name[i]);
		}		
		puts("");
	}
	
	fclose(handle);
	
	return 0;
}
