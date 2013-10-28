#include <stdio.h>

int main()
{
	int number,i,flag=0;
	printf("Enter a number : ");
	scanf("%d",&number);

	for(i=2;i<=number/2;++i)
	{
		if(number%i == 0)
		{
			flag = 1;
			break;
		}
	}

	if(flag == 0)
		printf("%d is a prime number\n", number);
	else
		printf("%d is not a prime number\n", number);
	return 0;
}