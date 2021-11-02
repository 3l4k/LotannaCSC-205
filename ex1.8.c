#include <stdio.h>

int main()
{
	char chr;
	printf("Enter a character: ");
	scanf("%c", &chr);
	
	// When %c is used, a character is displayed
	printf("You entered %c.\n", chr);
	
	// When %d is used, a ASCII is displayed
	printf("You entered %d.\n", chr);
	return 0;
}
