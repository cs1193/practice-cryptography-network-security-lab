#include <stdio.h>

int checkPrime(int n);

int main()
{
	int number, secnum, flag=0;
	printf("Enter a prime number : ");
	scanf("%d",&number);

	if(checkPrime(number))
	{
		secnum = (2*number)+1;
		if(checkPrime(secnum))
		{
			flag=1;
		}
	}

	if(flag == 0)
		printf("%d is a sophie prime number\n", number);
	else
		printf("%d is not a sophie prime number\n", number);
}

int checkPrime(int n)
{
	int i, flag=0;

	for(i=2;i<=n/2;++i)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}

	return flag;
}