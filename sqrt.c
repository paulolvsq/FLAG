#include <stdio.h>
#include <math.h>

int main() {

	unsigned long long i;
	unsigned long long p;

	unsigned long long stock;

	printf("Entrer un entier p premier impair :\n");
	scanf("%llu", &p);

	for(i = 0; i < p; ++i) {

		stock = (i*i) % p;
		if(stock == p - 1)
			printf("%llu est une racine carrée de -1 dans Z/%lluZ\n", i,  p);

	}

	return 0;

}

