// http://www.spoj.com/problems/SCPC11D/

#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);

    while (a | b | c) {
	// put the biggest number in c
	if (a > c) {
	    a ^= c;
	    c ^= a;
	    a ^= c;
	} else if (b > c) {
	    b ^= c;
	    c ^= b;
	    b ^= c;
	}

	// check whether the pythagoras holds for the numbers:
	// a^2 + b^2 = c^2
	printf((a * a + b * b == c * c) ? "right\n" : "wrong\n");

	scanf("%d%d%d", &a, &b, &c);
    }

    return 0;
}
