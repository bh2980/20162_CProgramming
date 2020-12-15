#include <stdio.h>
int multiple(int n, int arr[]);

int main(void)
{
	int a, b, min, max, i, j, k, c=0;
	int arr[99]={0, }, arr2[99]={0, };

	printf("두 양수를 적으세요 [최소 최대] : ");
	scanf("%d %d", &min, &max);

	for(a=min, j=0; a<=max; a++, j++){
		for(b=a, i=0; b; b/=10){
			arr[i]=b%10;
			i++;;
		}

		k=multiple(i-1, arr);

		if(k>=10){
			do{
				for(b=k, i=0; b; b/=10){
					arr[i]=b%10;
					i++;
				}

				k=multiple(i-1, arr);

			}while(k>=10);
		}

		arr2[j]=k;
	}

	printf("결과 : ");

	for(j=0, k=0; j<(max-min+1); j++){
		if(j==(max-min))
			printf("%d = ", arr2[j]);
		else
			printf("%d + ", arr2[j]);

		k+=arr2[j];
	}

	printf("%d\n", k);

	return 0;
}


int multiple(int n, int arr[])
{
	if(n==0)
		return arr[0];
	else
		return arr[n]*multiple(n-1, arr);
}
