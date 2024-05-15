#include <stdio.h>

int sum_to_min(int size, int a[]) {
	
	int ar_i[2];
	int min1 = a[0];
	int i_min1 = 0;
	int min2 = a[1];
	int i_min2 = 1;
	
	if (min1 > min2) {         //делаем min1 < min2, если это не так
		int e = min2;
		min2 = min1;
		min1 = e;
		i_min1 = 1;
		i_min2 = 1;
		}
	
	for (int i = 2; i < size; i++) {
		if ((a[i] < min1) && (a[i] < min2)) {
			min2 = min1;
			i_min2 = i_min1;
			min1 = a[i];
			i_min1 = i;
			}
		else if (a[i] < min2) {
			min2 = a[i];
			i_min2 = i;
			}
		}
		
	if (i_min1 > i_min2) {
		int e = i_min2;
		i_min2 = i_min1;
		i_min1 = e;
		}
		
	ar_i[0] = i_min1;
	ar_i[1] = i_min2;
	return &ar_i;
	}

int main() {
	
	int ar_i[2];
	int *pi;
	int size = 30;
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
	
	pi = sum_to_min(size, a);
	ar_i[0] = *pi;
	ar_i[1] = *(pi + 1);
	printf("%d %d", ar_i[0], ar_i[1]);
}

