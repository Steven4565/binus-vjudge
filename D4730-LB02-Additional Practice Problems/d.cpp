#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
	for (int i = 0; i < 4; i++) {
		char buffer[200];
		scanf("%s", &buffer);
		
		printf("Yeet %s \\(^-^)\n", buffer);
	}
	
	return 0;
}
