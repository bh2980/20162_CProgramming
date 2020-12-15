#include<stdio.h>

int main(void) 
{ 
	int a[3] = {5, 10, 20}; 
	int *p1 = a, *p2 = a+2; 
	
	printf("%d, %d\n", p1 - p2, *(p2-2) - *(p1+2)); 
	
	return 0;
}
