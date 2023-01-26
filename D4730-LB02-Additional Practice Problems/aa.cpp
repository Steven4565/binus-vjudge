#include <stdio.h>
#include <string.h>
//#include <iostream>
//
//#define int long long
//#define debug(x) std::cout << "x: " << x << std::endl;

struct Group {
	char names[250][20];
	int count;
};

const int groupCount = 21;

signed main() {
	
	int test;
	scanf(" %d", &test);
	
	for(int t = 0; t < test; t++) {		
		struct Group groups[groupCount];
		for (int i = 0; i < groupCount; i++) groups[i].count = 0;
	
		int n;
		scanf(" %d", &n);
		for(int i = 0; i < n; i++) {
			char buffer[20];
			int groupNum;
			scanf(" %s %d", &buffer, &groupNum);
			groupNum--;
			strcpy(groups[groupNum].names[groups[groupNum].count], buffer);
			groups[groupNum].count++;
		}
		
		printf("Case #%d:\n", t + 1);
		for	(int i = 0; i < groupCount; i++) {
			if (groups[i].count == 0) continue;
			printf("Group %d(%d):\n", i + 1, groups[i].count);
			
			for(int j = 0; j < groups[i].count; j++) {
				puts(groups[i].names[j]);
			}
		}
	}
	
	return 0;
}
