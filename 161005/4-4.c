#include <stdio.h>

int sum(int a);

int main(void)
{
	int i;

	printf("임의의 정수 1개를 입력하시오 : ");
	scanf("%d", &i);

	sum(i);

}

int sum(int a)
{
	static int callnumber = 0;
	int i, j=0;

	for(i=1; i<=a; i++){
		j += i;
		callnumber++;
		printf("1부터 %d까지 합은 %d입니다.\n", i, j);
	}

	printf("sum함수는 %d번 불렸습니다.\n", callnumber);

	return 0;
}
