#include <stdio.h>

int main()
{
	char input[5];
	scanf("%s", input);
	
	if ((input[0] % 2 != 0) && (input[1] % 2 != 0)) printf("BLACK");
	else if ((input[0] % 2 == 0) && (input[1] % 2 == 0)) printf("BLACK");
	else printf("WHITE");
	
	return 0;
}

