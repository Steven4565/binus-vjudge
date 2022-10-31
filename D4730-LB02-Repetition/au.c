#include <stdio.h>
#include <string.h>

int main () {
    int test;
    scanf("%d", &test);

    for (int t = 0; t < test; t++)
    {
        int input;
        char output[1000];
        scanf("%d", &input);
        printf("Case #%d: ", t+1);
        for(int i = 1; i <= input; i++) {
            printf("%c", 96+i);
        }
        printf("\n");
    }
    
    return 0; 
}