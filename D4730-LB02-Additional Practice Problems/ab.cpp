#include <stdio.h>
#include <string.h>
//#include <iostream>
//
//#define int long long
//#define debug(x) std::cout << "x: " << x << std::endl;

struct Row {
	int a, b, c;
};


// inputs are index
void reverse (struct Row arr[], int left, int right) {
	int count = right - left + 1;
	struct Row temp[count];
	for(int i = 0; i < count; i++) {
		temp[i] = arr[left + i];
	}
	
	for(int i = 0; i < count; i++) {
		arr[left + i] = temp[count - i - 1];
	}
}

void shift (struct Row arr[], int left, int right) {
	for(int i = left; i <= right; i++) {
		int temp = arr[i].c;
		arr[i].c = arr[i].b;
		arr[i].b = arr[i].a;
		arr[i].a = temp;
	}
}

signed main () {
	
	int test;
	scanf(" %d", &test);
	
	for(int t = 0; t < test; t++) {
		int n, q;
		scanf(" %d %d", &n, &q);
		struct Row arr[n];
		char names[n][100];
		for(int i = 0; i < n; i++) {
			scanf(" %s %d %d %d", names[i], &arr[i].a, &arr[i].b, &arr[i].c);
		}
		
		
		for(int i = 0; i < q; i++) {
			int type, l, r;
			scanf(" %d %d %d", &type, &l, &r);
			if (type == 1) { // reverse
				reverse(arr, l - 1, r - 1);
			} else { // shift
				shift(arr, l - 1, r - 1);
			}
		}
		printf("Case #%d:\n", t + 1);
		for(int i = 0; i < n; i++) {
			printf("%s %d\n", names[i], arr[i].c);
		}
	}
	
	return 0;
}
