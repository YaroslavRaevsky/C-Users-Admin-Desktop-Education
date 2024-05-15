//#include <stdio.h>

void sort_array(int size, int a[]) {
	
	int min;
	
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1 ; j++) {
			if (a[j] > a[j + 1]) {
				min = a[j + 1];
				a[j + 1] = a[j];
				a[j] = min;
				}
			}
		}
/*
	for (int i = 0; i < size; i++) {
		printf("%d ", a[i]);
		}
	*/
	}

/*
int main()
{
	int size = 5, n;
	int a[size];
	
	for (int i = 0; i < size; i++) {
		scanf("%d", &n);
		a[i] = n;
		}
	
	sort_array(size, a);
	
	return 0;
}

*/
