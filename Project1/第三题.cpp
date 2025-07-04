#include "stdio.h"
#include "math.h"
#define pai 3.1415927
int main() {
	double r, v;
	while (scanf_s("%lf", &r) != EOF) {
		v = (4.0 * pai * r * r * r) / 3.0;
		printf("%.3lf\n", v);
	}
	return 0;
}