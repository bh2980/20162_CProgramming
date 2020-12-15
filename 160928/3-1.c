#include <stdio.h>

int main(void)
{
	int i=0, sum = 0, number = 0;

	do
	{
		printf("100 이하의 자연수 입력 : ");
		scanf("%d", &i);

		if(i>0){
			sum += i;
			++number;
		}

		else{
			printf("잘못된 입력값입니다.\n");
		}
	}while(sum < 100);

	printf("지금까지 입력하신 숫자들의 개수는 %d개이며, 그 합은 %d입니다.", number, sum);

	return 0;
}
 
