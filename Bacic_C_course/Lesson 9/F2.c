//#include <stdio.h>

void sort_even_odd(int n, int a[]) {
	
	int arr[n];
	static int k = 0;
	
	for (int j = 0; j < 2; j++) {
		for (int i = 0; i < n; i++) {
			if (j == 0) {
				if (a[i] % 2 == 0) {
					arr[k] = a[i];
					k++;
					}
				}
			if (j == 1) {
				if (a[i] % 2 != 0) {
					arr[k] = a[i];
					k++;
					}
				}			
			}
		}

	for (int i = 0; i < n; i++) {
		a[i] = arr[i];
		}
	
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
	
	sort_even_odd(size, a);
	
	return 0;
}

*/
