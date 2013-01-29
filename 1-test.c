// http://www.spoj.com/problems/TEST/

#include <stdio.h>

#define SOLUTION 42

int main() {
    int number;

    scanf("%d", &number);
    while (number != SOLUTION) {
	printf("%d\n", number);
	scanf("%d", &number);
    }

    return 0;
}
