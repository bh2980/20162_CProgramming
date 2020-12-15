#include<stdio.h>

void sort3(int *a, int *b, int *c);

int main(void) 
{ 
	int x, y, z;

	x = 10, y = 5, z = 3; 
	sort3(&x, &y, &z); 
	printf("x = %d, y = %d, z = %d\n", x, y, z);

	x = 3, y = 10, z = 5; 
	sort3(&x, &y, &z); 
	printf("x = %d, y = %d, z = %d\n", x, y, z);

	return 0;
}

void sort3(int *a, int *b, int *c)
{
	int temp, i;

	for(i=0; i<3; i++){
		if(*a > *b){
			temp = *a;
			*a = *b;
			*b = temp;
		}
		else{
			if(*b > *c){
				temp = *b;
				*b = *c;
				*c = temp;
			}
		}
	}
}
