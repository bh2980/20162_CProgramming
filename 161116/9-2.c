#include<stdio.h>
#define N 5

int main(void) 
{ 
	int a[ ] = {1, 2, 3, 4, 5}, i; 
	int *p = a; 
	
	for(i=0 ; i<N ; i++) printf("%d ", a[i]); 
	printf("\n");
	for(i=0 ; i<N ; i++) printf("%d ", *(a+i));
	printf("\n");
	for(i=0 ; i<N ; i++) printf("%d ", *p+i);
	printf("\n");
	for(i=0 ; i<N ; i++) printf("%d ", *(p+i));
	printf("\n");
	for(i=0, p=a ; i<N ; i++) printf("%d ", *(p++));
	printf("\n");

	return 0; 
}
