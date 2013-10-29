#include <stdio.h>
#include <math.h>

float totient(int n);
int isPrime(int n);

int main()
{
	int number;
	float result;
	printf("Enter the number:");
	scanf("%d",&number);

	result = totient(number);
	printf("%f\n", result);

	return 0;
}

float totient(int n)
{
	float r;
	int i;

	for(i=0;i<=sqrt(n);i++)
		if(n%i == 0 && isPrime(i))
			r *= (1-(1/(float) i));

	return r;
}

int isPrime(int n)
{
	int i;
	for(i=2;i <= sqrt(n);i++)
		if(n%i == 0)
			return 0;
		return 1;
}