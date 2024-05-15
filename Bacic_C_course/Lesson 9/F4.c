#include <stdio.h>

void print_digit(char s[]) {
	
	int a[10];
	
	for (int i = 0; i < 10; i++) {     
		a[i] = 0;
		}
	int j = 0;
	while (1) {                     
		if (s[j] == '.') break;
		for (int i = 0; i < 10; i++) {
			if (s[j] == i + 48) {
				a[i]++;
				break;
				}
			}
		j++;	
		}
	
	for (int i = 0; i < 10; i++) {
		if (a[i] != 0) {
			printf("%d %d\n", i, a[i]);
			}
		}
	}

int main() {
    char s[] = "ABC5612 78912jkd.";
    print_digit(s);
}	

