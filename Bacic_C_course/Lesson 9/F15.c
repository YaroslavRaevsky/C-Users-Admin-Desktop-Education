//#include <stdio.h>

 int count_bigger_abs(int n, int a[]) {
	
	int max = a[0];
	int count = 0;
	int a0;
	for (int i = 1; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
			}
		}
	
	for (int i = 0; i < n; i++) {
		if (a[i] < 0) {
			a0 = a[i] * (-1);
			}
		else a0 = a[i];
		if (a0 > max) {
			count++;
			}
		}
	
	return count;
	}

/*
int main()
{
	int size = 10;
	int a[] = {1, 1, 2, 5, 3, 0, -100, -101, 99, 99};
	
	int num = count_bigger_abs(size, a);
	printf("%d", num);
	
	return 0;
}
*/
