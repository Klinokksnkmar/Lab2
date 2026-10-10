#include <stdio.h>
int zad1()
{
	printf("\t1\n\t\t2\n\t\t\t3\n");
	printf("%d\n%d\n%d\n%d\n", 1, 2, 3, 4);
	printf(" % 10.3f\n", 12.234657);
	printf(" % 10.5f\n", 12.234657);
	printf("7/5 = %d\n", 7 / 5); // подзадание 1
	printf("2000*4 = %d\n", 2000 * 4);
	printf("%f razdelit %e ravno %f\n", 5., 2000000., 5. / 2000000);
	printf("%d razdelit %d ravno %d\n", 5, 2000000, 5 / 2000000);
	printf("%f razdelit %f ravno %f\n", 5., 2000000., 5. / 2000000);
	printf("%g razdelit %g ravno %g\n", 5., 2000000., 5. / 2000000);
	printf("%e razdelit %e ravno %e\n", 5., 2000000., 5. / 2000000);
	return 0;
}


int zad2()
{
	int N, K;

	N = 23;
	K = 33;

	printf("Now %d hours %d minutes 00 seconds\n", N, K);
	printf("Minute of day: %d\n", N * 60 + K);
	printf("It is still %d hours and %d minutes untill midnight\n", 24 - N - 1, 60 - K);
	printf("It is been %d seconds since 8:00\n", N * 60 * 60 + K * 60 - 8 * 60);
	printf("Tekyschiy chas = %d sytok i tekyschaya minuta %d chasa", N / 24, K / 60);
	return 0;
}

	int zad3()
	{
		int n, L, k, m;
		n = 3;
		L = 233;
		k = 2;
		m = 2;
		printf("n = %5d,L=%5d\n result: %-+5.2f\n", n, L, n / (L * 1.0));
		return 0;
	}

	int main()
	{
		zad1();
		zad2();
		zad3();
		return 0;
	}