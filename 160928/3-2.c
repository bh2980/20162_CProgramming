#include <stdio.h>

int main(void)
{
	int i = 0, j = 0, m=0, n=0, sum = 0;

	printf("두 정수를 입력해주세요.\n");
	printf("첫번째 정수 입력 : ");
	scanf("%d", &i);
	printf("두번째 정수 입력 : ");
	scanf("%d", &j);

	if(i>j)
		for(m=j+1; i>m; ++m)
			sum += m;
	else
		n=i+1;
		while(j>n)
		{
			sum += n;
			n++;
		}

	printf("%d와 %d 사이의 정수 합은 %d입니다.\n", i, j, sum);

	return 0;
}
