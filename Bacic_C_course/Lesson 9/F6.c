#include <stdio.h>

int is_two_same(int size, int a[]) {
	
	_Bool flag = 0;
	int count = 0;
	
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (a[i] == a[j]) count++;
			}
		if (count == 2) {
			flag = 1;
			break;
			}
		else count = 0;
		}                     
	//printf("%d", flag);
	if (flag ==1){printf("YES");}
	else {printf("NO");}
	//return flag;
	}

int main() {
	
	int size = 5;
	int a[size];
	
	for (int i = 0; i < size; i++) {                     
		scanf ("%d", &a[i]);
		} 
  
    is_two_same(size, a);
}	

