#include <stdio.h>

int is_two_same(int size, int a[]) {
	
	int output=0;
	for (int i=0; i<size; i++){
		for (int j=0; j<size; j++){
		if (i==j) {continue;}
		if(a[i]==a[j]){output=1;}
		}
	}
	if (output==1){return 1;}
	else {return 0;}
	//printf("%d", output);
}

int main()
{
	int size = 5, n;
	int a[size];
	
	for (int i = 0; i < size; i++) {
		scanf("%d", &n);
		a[i] = n;
		}
	
	is_two_same(size, a);
	
	return 0;
}


