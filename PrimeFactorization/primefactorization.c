#include <stdio.h>
#include <math.h>

void primefactors(int n);

int main()
{
	int number;
	printf("\n Enter the number to find the factors :");
	scanf("%d",&number);
	primefactors(number);
	return 0;
}

void primefactors(int n)
{
	int i;
	
	while(n%2 == 0)
	{
		printf("%d\n",2);
		n = n/2;
	}

	for(i=3;i <= sqrt(n);i=i+2)
	{
		while(n%i == 0)
		{
			printf("%d\n", i);
			n = n/i;
		}
	}

	if(n > 2)
		printf("%d\n", n);


}