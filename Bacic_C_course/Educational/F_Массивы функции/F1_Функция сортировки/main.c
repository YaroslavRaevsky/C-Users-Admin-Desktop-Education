#include <stdio.h>

#define AMOUNTELEMENTS 20

void sort_array(int, int);

int main()
{
    int inputNumber[AMOUNTELEMENTS];
    
    for(int i = 0; i < AMOUNTELEMENTS; i++)
        scanf("%d", &inputNumber[i]);
    
    sort_array(5, inputNumber);

    for (int i = 0; i < AMOUNTELEMENTS; i++)
    {
        printf("%d ", inputNumber[i]);
    }
    
    return 0;
}

void sort_array(int size, int a[])
{
    int temp;
    
    for (int i=0; i<size; i++){
		for (int j=0; j<size; j++){
			if (a[i] < a[j]){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            
			}
		}
    }
 //   for (int i=0; i<size; i++){
//		printf("%d ", a[i]);
//	}
}
