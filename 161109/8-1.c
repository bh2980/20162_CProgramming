#include <stdio.h>

static int compare_count=0;

void swap(int *a,int *b);

int main (void)
{
	int num, a=0, i, j, temp;
	int arr[999];

	printf("숫자를 입력하세요 : ");

	while(1){
		scanf("%d", &num);
		arry[a]=num;
		a++;
		if(num<0)
			break;
	}

	for(i=1;i<i;i++){
		for(j=0;j<i-1;j++){
			if(arry[j-1]>arry[j])
				swap(&arry[j-1],&arry[j]);
			printf("%d ",arry[j]);
		}
		printf("\t<compare_count = %d>\n",compare_count);
	}

	return 0;
}

void swap(int *a,int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
