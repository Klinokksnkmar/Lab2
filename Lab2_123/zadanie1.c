#include <stdio.h>
int main()
{
	printf("\t1\n\t\t2\n\t\t\t3\n");
	printf("%d\n%d\n%d\n%d\n", 1, 2, 3, 4);
	printf(" % 10.3f\n",12.234657);
	printf(" % 10.5f\n",12.234657);
	printf("7/5 = %d\n", 7 / 5); // подзадание 1
	printf("2000*4 = %d\n", 2000 * 4);
	printf("%f razdelit %e ravno %f\n", 5., 2000000., 5. / 2000000);
	printf("%d razdelit %d ravno %d\n", 5., 2000000., 5. / 2000000);
	printf("%f razdelit %f ravno %f\n", 5., 2000000., 5. / 2000000);
	printf("%g razdelit %g ravno %g\n", 5., 2000000., 5. / 2000000);
	printf("%e razdelit %e ravno %e\n", 5., 2000000., 5. / 2000000);
	return 0; 
}