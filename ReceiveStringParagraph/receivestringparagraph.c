#include <stdio.h>

int main()
{
	char paragraph[100];
	printf("Enter the paragraph : ");
	scanf("%[^t]", paragraph);
	printf("%s\n", paragraph);
}