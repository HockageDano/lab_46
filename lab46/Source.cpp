#include<iostream>
#include <cmath>
using namespace std;
int main() {
	double P, S;
	int k, i;
	P = 1;
	k = 1;
	while (i <= 15)

	{
		S = 0;
		i = 1;
		while (i <= k)

		{
			S += sin(1. * i) * sin(1. * i);
			i++;

		}
		P *= sqrt(S) / (1 + S);
		k++;

	}
	cout << P << endl;
	P = 1;
	k = 1;
	do
	{
		S = 0;
		i = 1;
		do
		{
			S += sin(1. * i) * sin(1. * i);
			i++;
		} while (i <= k);
		P *= sqrt(S) / (1 + S);
		k++;
	} while (k <= 10);
	cout << P << endl;
	P = 1;
	for (k = 1; k <= 10; k++)

	{
		S = 0;
		for (i = 1; i <= k; i++)

		{
			S += sin(1. * i) * sin(1. * i);

		}
		P *= sqrt(S) / (1 + S);

	}
	cout << P << endl;
	P = 1;
	for (k = 10; k >= 1; k--
		)

	{
			S = 0;
		for (i = k; i >= 1; i--)
		{
			S += sin(1. * i) * sin(1. * i);
		}
		P *= sqrt(S) / (1 + S);
	}
	cout << P << endl;
	return 0;
}