#include<stdio.h>

int SumArray1(int *p, int n); 
int SumArray2(int *p, int n);

int main(void) 
{  
	int a[ ] = {10, 5, 15, 25, 7}; 
	
	printf("1. %d\n", SumArray1(a, 5));  
	printf("2. %d\n", SumArray2(a, 5));  
	printf("3. %d, %d\n", SumArray1(a, 5), SumArray2(a, 5));  
	printf("4. %d, %d\n", SumArray2(a, 5), SumArray1(a, 5)); 

	return 0; 
}   

int SumArray1(int *p, int n) 
{ 
	int result = 0, i; 
	
	for(i=0 ; i<n ; i++) result += *(p+i); 
	
	return result; 
}

int SumArray2(int *p, int n) 
{ 
	int result = 0, i; 
	
	for(i=0 ; i<n ; i++) result += (*p)++; 
	return result; 
}
