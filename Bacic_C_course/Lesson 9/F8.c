#include <stdio.h>

int main() {
  
	int number, count = 0, min = 1001, max = 0, sum1 = 0, sum2 = 0; 		
	
	while (1) {
		scanf("%d", &number);
		if (number == 0) break;
		if (max < number) {
			max = number;
			}
		if (min > number) {
			min = number;
			}
		count++;
		sum1 += number;
		}
	
	for (int i = min; i <= max; i++) {
		sum2 += i;
		}
	number = sum2 - sum1;
	printf("%d", number);	
}

