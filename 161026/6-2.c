#include <stdio.h>

int main(void)
{
	int a, b, min, max, i;
	int arr[10]={0, };//배열의 원소 개수보다 초깃값을 적게 할당하면 남은 원소는 0으로 초기화

	printf("두 양수를 적으세요 [최소 최대] : ");
	scanf("%d %d", &min, &max);

	for(a=min; a<=max; a++){
		for(b=a; b; b/=10){//축약 연산자 a/=b는 a를 b로 나눈 몫을 다시 a에 대입
			arr[b%10]++;
		}
	}

	for(i=0; i<10; i++){
		if(arr[i]==0);
		else
			printf("%d : %d회\n", i, arr[i]);
	}

	return 0;
}
