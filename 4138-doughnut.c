// http://www.spoj.com/problems/DOUGHNUT/

#include <stdio.h>

int main() {
    int i;
    int tests = 0;
    int cats = 0;
    int max_weight = 0;
    int doughnut_weight = 0;

    scanf("%d", &tests);

    for (i = 0; i < tests; i++) {
	scanf("%d%d%d", &cats, &max_weight, &doughnut_weight);
	printf((max_weight >= cats * doughnut_weight) ? "yes\n" : "no\n");
    }

    return 0;
}
