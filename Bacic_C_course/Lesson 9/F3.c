#include <stdio.h>

void sort_numbers() {
	
	int a[10];
	static char simbol;
	
	for (int i = 0; i < 10; i++) {      //заполнение нулями массива счетчиков цифр
		a[i] = 0;
		}

	while (1) {                     
		scanf("%c", &simbol);
		if (simbol == '\n') break;
		for (int i = 0; i < 10; i++) {
			if (simbol == i + 48) {
				a[i]++;
				break;
				}
			}	
		}
	
	for (int i = 0; i < 10; i++) {
		if (a[i] != 0) {
			printf("%d %d\n", i, a[i]);
			}
		}
	}


int main()
{	
	sort_numbers();	
	return 0;
}


