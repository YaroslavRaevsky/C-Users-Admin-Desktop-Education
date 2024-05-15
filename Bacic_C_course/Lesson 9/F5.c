//#include <stdio.h>

int find_max_array(int size, int a[]) {
	
	int max = a[0];
	
	for (int i = 1; i < size; i++) {                     
		if (a[i] > max) {
			max = a[i];
			}
		}

	//printf("%d", max);
	return max;	
	}
/*
int main() {
	int size = 95, a[size];
	
	for (int i = 0; i < size; i++) {                     
		scanf ("%d", &a[i]);
		} 
  
    find_max_array(size, a);
}	
*/
