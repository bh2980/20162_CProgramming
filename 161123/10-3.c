#include <stdio.h> 
 
typedef struct 
{  
	float re;
	float im;
}complex;
 
 
void display(complex a)
{
	printf("%.2lf + j%.2lf\n", a.re, a.im);
}

void add(complex *c, complex a, complex b)
{
	c->re = a.re + b.re;
	c->im = a.im + b.im;
}

void sub(complex *c, complex a, complex b)
{
	c->re = a.re - b.re;
	c->im = a.im - b.im;
}

void mul(complex *c, complex a, complex b)
{
	c->re = a.re * b.re;
	c->im = a.im * b.im;
}
 
int main(void) 
{  
	complex a = {10.0, 2.0}, b = {4.0, -1.0}, c;
	add(&c, a, b); 
	display(c);
	sub(&c, a, b);
	display(c);
	mul(&c, a, b);
	display(c);
	
	return 0; 
} 
