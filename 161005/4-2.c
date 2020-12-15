#include <stdio.h>

void tohex(int n)
{
	int number=n/16;
	int rest=n%16;

	if (number>0)
	tohex(number);

	if (rest>9)
	printf("%c",'A'+rest-10);

	else
	printf("%d",rest);
}

int main (void)
{
	int input;

	printf("양수를 적으세요 : ");

	while(1)
	{
	scanf("%d",&input);

	if(input<0)
		return 0;
		printf("16진수 : ");
		tohex(input);
		printf("\n");
		printf("양수를 적으세요 : " );
	}
	return 0;
}
