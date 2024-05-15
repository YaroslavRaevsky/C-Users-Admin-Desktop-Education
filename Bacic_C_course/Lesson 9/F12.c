//#include <stdio.h>

void change_max_min(int size, int a[]) {
	
	int i_min = 0,i_max = 0;
	int min = a[0];
	int max = a[0];
	
	for (int i = 1; i < size; i++) {
		if (a[i] < min) {
			min = a[i];
			i_min = i;
			}
		if (a[i] > max) {
			max = a[i];
			i_max = i;
			}
		}
	int e = a[i_min];
	a[i_min] = a[i_max];
	a[i_max] = e;
	/*
	for (int i = 1; i < size; i++) {
		printf("%d ", a[i]);
		}
		*/
	}
/*
int main() {
	
	int size = 10;
    int a[]= {1, 2, 3, 4, -5, 6, 7, 8, -9, -10};
    
    for (int i = 1; i < size; i++) {
		printf("%d ", a[i]);
		}
	printf("\n");
    
    change_max_min(size, a);     
}

*/
