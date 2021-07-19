
#include <stdio.h>
#include <math.h>	

int main() {
	long double x1 = 2.0, x2 = 3.9, x3 = -3.3, x4 = 4.9;

	printf(" Truncated value is %Lf \n", truncl(x1));
	printf(" Truncated value is %Lf \n", truncl(x2));

	printf(" Truncated value is %Lf \n", truncl(x3));
	printf(" Truncated value is %Lf \n", truncl(x4));

	_getch();
	return 0;
}
