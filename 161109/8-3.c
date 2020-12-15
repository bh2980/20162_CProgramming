#include <stdio.h>

int main(void)
{
	int num, i, j, k;

	printf("양의 정수를 입력하세요 : ");
	scanf("%d", &num);
	if(num>0){
		if(num%2==1){ 
			for(j=1; j<=(num+1)/2; j=j+2){
				for(k=((num+1)/2)-j-1; k>0; k=k-2)
					printf(" ");

				for(i=j; i>=1; i--){
					if(i>=10){
						printf("%d", i%10+1);
					}
					else
						printf("%d", i);
				}

				printf("\n");
			}
			for(j=(num+1)/2-2; j>=1; j=j-2){
				for(k=((num+1)/2)-j; k>0; k=k-2)
					printf(" ");

				for(i=j-1; i>=1; i--){
					if(i>=10)
						printf("%d", i%10+1);
					else
						printf("%d", i);
				}

				printf("\n");
			}
		}

		else{
			for(j=1; j<=num/2; j=j+2){
				for(k=(num/2)-j-1; k>0; k=k-2)
					printf(" ");

				for(i=j; i>=1; i--){
					if(i>=10){
						printf("%d", i%10+1);
					}
					else
						printf("%d", i);
				}

				printf("\n");
			}
			for(j=num/2; j>=1; j=j-2){
				for(k=(num/2)-j; k>0; k=k-2)
					printf(" ");

				for(i=j-1; i>=1; i--){
					if(i>=10)
						printf("%d", i%10+1);
					else
						printf("%d", i);
				}

				printf("\n");
			}
		}
	}

	else{
		printf("양의 정수를 입력하세요 : ");
		scanf("%d", num);
	}

	return 0;
}
