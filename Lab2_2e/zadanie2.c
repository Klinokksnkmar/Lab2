#include <stdio.h>
int main()
{
	int N, K;

	N = 23;
	K = 33;

	printf("Now %d hours %d minutes 00 seconds\n", N, K);
	printf("Minute of day: %d\n", N * 60 + K);
	printf("It is still %d hours and %d minutes untill midnight\n", 24 - N - 1, 60 - K);
	printf("It is been %d seconds since 8:00\n", N * 60 * 60 + K * 60 - 8 * 60);
	printf("Tekyschiy chas = %d sytok i tekyschaya minuta %d chasa", N / 24.00, K / 60.00);
	return 0;
}