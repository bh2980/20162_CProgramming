#include <stdio.h>

int main(void)
{
	int year=0, a, b, c;

	printf("연도를 입력하시오 : ");
	scanf("%d", &year);

	a=four(year);
	b=fourhun(year);

	if(a||b==1)
		printf("%d년은 윤년입니다.\n", year);
	else
		printf("%d년은 윤년이 아닙니다.\n", year);

	return 0;
}

int four(int year)
{
	if(year%4==0)
		if(year%100==0)
			return 0;
		else
			return 1;
	else
		return 0;
}

int fourhun(int year)
{
	if(year%100==0)
		if(year%400==0)
			return 1;
		else
			return 0;
	else
		return 0;
}
