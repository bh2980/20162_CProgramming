#include <stdio.h>
#include <math.h>

int main(void)
{
	double a, b, c, i, cos;

	while(1){
	printf("ax^2+bx+c=0에서 a, b, c를 입력하세요 : ");
	scanf("%lf %lf %lf", &a, &b, &c);

	i=sqrt(pow(-b/(2*a), 2)+pow((4*a*c-b*b)/(2*a), 2));
	cos=((-b/(2*a))/i);

	if(a==0)
		if(b==0)
			break;
		else
			if(c==0)
				printf("x=0\n");
			else{
				printf("x=%g\n", -c/b);
			}
	else
		if(b*b-4*a*c>0)
			printf("x=%g, %g\n", (-b+sqrt(b*b-4*a*c))/(2*a), (-b-sqrt(b*b-4*a*c))/(2*a));
		else if(b*b-4*a*c==0)
			printf("x=%g\n", -b/(2*a));
		else

			printf("x=%g+%gj, %g-%gj\n", -b/(2*a), (4*a*c-b*b)/(2*a), -b/(2*a), (4*a*c-b*b)/(2*a));
			printf("직각 좌표계 표현 (%g, %g)\n", i*cos, i*(1-(cos*cos)));
			printf("극좌표계 표현 %g*e^j%g\n", i, atan((1-cos*cos)/cos));
	}

	return 0;
}
