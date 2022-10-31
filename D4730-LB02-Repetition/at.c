#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

void printChar(char foo, int count) {
    for (int i = 0; i < count; i++)
    {
        printf("%c", foo);
    }
    
}

int main()
{
    int test;
    scanf("%d%*c", &test);

    for (int t = 0; t < test; t++)
    {
        int triangle;
        scanf("%d", &triangle);

        for (int i = 1; i <= triangle; i++)
        {
            // left space
            printChar(' ', triangle-i);
            
            printChar('*', 2*i-1);
            printf("\n");
        }
        
    }   

    return (0);
}