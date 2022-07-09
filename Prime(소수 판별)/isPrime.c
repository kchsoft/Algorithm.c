#include<stdlib.h>

bool isPrime(int Number) {
	for (int i = 2; i * i <= Number; i++)
		if (Number % i == 0) return false;

	return true;
}