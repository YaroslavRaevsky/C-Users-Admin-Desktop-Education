//#include <stdio.h>

int compression(int a[], int b[], int N) {

    int count = 0;
    static int k = 0;
	
	if (a[0] == 1) {
		b[k] = 0;
		k++;
		}
	
	for (int i = 0; i < N - 1; i++) {
		if (a[i] == a[i + 1]) {
			count++;
			}
		else {
			count++;
			b[k] = count;
			k++;
			count = 0;
			}
		}
	count++;
	//printf("count = %d\n", count);
	b[k] = count;	
	//printf("b_k = %d\n", b[k]);
	
	/*
	for (int i = 0; i <= k; i++) {
		printf("%d ", b[i]);
		}
*/	
    return k + 1;
}
/*
int main() {
	
	int size = 6;
    int a[]= {1,1,1,1,1,0};
    int b[size + 1];
    
    int k = compression(a, b, size);

    printf("\nk = %d\n", k);
    
}
*/
