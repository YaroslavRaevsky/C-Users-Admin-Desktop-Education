//#include <stdio.h>

int count_between(int from, int to, int size, int a[]) {
	
	int count = 0;
	for (int i = 0; i < size; i++) {
		if ((a[i] >= from) && (a[i] <= to)) {
			count++;
			}
		}
	return count;
	}

/*
int main()
{
	int from =99, to = 101, size = 10;
	int a[] = {1, 1, 2, 5, 3, 0, 100, 101, 99, 99};
	
	int num = count_between(from, to, size, a);
	printf("%d", num);
	
	return 0;
}*/

