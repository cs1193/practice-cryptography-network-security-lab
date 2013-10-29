#include <stdio.h>

void encrypt(char cipher[],int shift);
void decrypt(char cipher[],int shift);

int main()
{
	char cipher[50];
	int shift;

	printf("Enter the text to be encrypted: ");
	scanf("%s",cipher);

	printf("Enter the shift value:");
	scanf("%d",&shift);

	encrypt(cipher,shift);

	return 0;
}

/*


void caesar(char cipher[],int shift)
{
	int i = 0;

	while(cipher[i] != '\0')
	{
		if((cipher[i] + shift) >= 97 && (cipher[i] + shift) <= 121)
			cipher[i] += shift;
		else
			cipher[i] += (shift - 25);
		
		i++;
	}

	printf("%s\n", cipher);
}

*/

void encrypt(char cipher[],int shift)
{
	int i = 0;
	char encrypted[50];

	while(cipher[i] != '\0')
	{
		if((cipher[i]) >= 97 && (cipher[i]) <= 121)
			encrypted[i] = ((cipher[i]) + shift)%26;
		
		i++;
	}

	printf("%s\n", encrypted);
	decrypt(encrypted, shift);
}

void decrypt(char cipher[],int shift)
{
	int i = 0;
	char decrypted[50];

	while(cipher[i] != '\0')
	{
		if((cipher[i] + shift) >= 97 && (cipher[i] + shift) <= 121)
			decrypted[i] = (cipher[i] - shift)%26;
		
		i++;
	}

	printf("%s\n", decrypted);	
}