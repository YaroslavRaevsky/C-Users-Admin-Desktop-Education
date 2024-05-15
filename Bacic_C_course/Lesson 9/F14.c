//#include <stdio.h>

int sum_between_ab(int from, int to, int size, int a[]) {
	
	int sum = 0;
	for (int i = 0; i < size; i++) {
		if ((a[i] >= from) && (a[i] <= to)) {
			sum += a[i];
			}
		}
	return sum;
	}

/*
int main()
{
	int from =1, to = 2, size = 10;
	int a[] = {1, 1, 2, 5, 3, 0, 100, 101, 99, 99};
	
	int sum = sum_between_ab(from, to, size, a);
	printf("%d", sum);
	
	return 0;
}
*/
