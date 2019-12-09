#include "pch.h"

int power(int n, int k)
{
	int result = 1;
	if (k == 0)
		return 1;
	else
		for (int i = 0; i < k; i++)
			result *= n;

	return result;
}

double absolute(double x)
{
	if (x >= 0)
		return x;
	else
		return -x;
}