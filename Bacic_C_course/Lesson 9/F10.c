#include <stdio.h>

int main() {
	
	char simbol, simbol_0;
	int count = 0;
	
	scanf("%c", &simbol_0);
	count++;
	
	while (1) {
		scanf("%c", &simbol);
		if (simbol == '.') break;
		if (simbol == simbol_0) {
			count++;
			}
		else {
			printf("%c%d", simbol_0, count);
			simbol_0 = simbol;
			count = 1;
			}		
		}
	printf("%c%d", simbol_0, count);	
}


