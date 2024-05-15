#include <stdio.h>

#define AMOUNTELEMENTS 20

void sort_even_odd(int, int *);

int main()
{
  //  int inputNumber[AMOUNTELEMENTS];
    
    int a[] = {19, 20, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    
  //  for(int i = 0; i < AMOUNTELEMENTS; i++)
   //     scanf("%d", &inputNumber[i]);
    
    sort_even_odd(20, a);

    
    return 0;
}


void sort_even_odd(int n, int a[]) {

	for (int i=0,j=0; j<n; j++){
	if (a[j]%2==0){
	//	if (j=0){cost=a[j]; a[j+1]}
	
		for (int temp, count=j; count>=i; count--){
			temp = a[count];
            a[count] = a[count-1];
            a[count-1] = temp;  
             // a[i]=temp;
            }
		a[i]=a[j];
		i++;
		
		    for (int d,i = 0; i < n; i++)
    {	d=a[i];
        printf("%d ", a[i]);
    }
            printf("\n");
				
		
		}
	}

    for (int d,i = 0; i < n; i++)
    {	d=a[i];
        printf("%d ", a[i]);
    }

}

