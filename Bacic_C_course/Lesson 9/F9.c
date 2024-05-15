//#include <stdio.h>

void swap_negmax_last(int size, int a[]) {

	_Bool flag = 0;
	int max_neg = 0, num_max_neg; 
	for (int i = 0; i < size; i++) {
		if ((a[i] < 0) && (flag == 0)) {
			max_neg = a[i];
			num_max_neg = i;
			flag = 1;
			//printf("max_neg = %d; num_max_neg = %d\n", max_neg, num_max_neg);
			}
		else if ((a[i] < 0) && (max_neg < a[i])) {
			max_neg = a[i];
			num_max_neg = i;
			//printf("max_neg = %d; num_max_neg = %d\n", max_neg, num_max_neg);
			}			
		}
	
	//printf("flag = %d\n", flag);
	
	if (flag == 1) {
		int e = a[size - 1];
		a[size - 1] = max_neg;
		a[num_max_neg] = e;
		}
	/*
	for (int i = 0; i < size; i++) {
		printf("%d ", a[i]);
		}
		* */
}
/*
int main() {
	
	int size = 10;
    int a[]= {1, 2, 3, 4, -5, 6, 7, 8, -9, -10};
    
    swap_negmax_last(size, a);     
}

*/
