#include <stdio.h>

int main(void)
{
	int i;
	double k=0;

	for(i=1; i<1000000; i++){
		if(i % 2)
			k += 4.0/(2.0*i-1.0);
		else
			k -= 4.0/(2.0*i-1.0);
	}

	printf("pi = %.15lf\n\n", k);

	printf("pi = 3.14, 반지름이 2인 원의 넓이 = %lf\n", 4*3.14);
	printf("pi = 3.141592, 반지름이 2인 원의 넓이 = %lf\n", 4*3.141592);
	printf("pi = 구한 값, 반지름이 2인 원의 넓이 = %lf\n", 4*k);

	return 0;
}
