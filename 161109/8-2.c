#include <stdio.h>
#define N 5

int compare_count=0;
int change(int arr[], int arr_num);

int main(void)
{
	int num, i=0;
	int arr[999];

	printf("숫자를 입력하세요 : ");

	while(1){
		scanf("%d", &num);
		arr[i]=num;
		i++;
		if(num<0)
			break;
	}

	change(arr, i-1);
}

int change(int arr[], int arr_num)
{
   int i, j, k, temp;

   for(j = 1; j < arr_num; j++)
   {
      for(i=0; i<arr_num-j; i++)
      {
         if (arr[i] > arr[i+1])
         {
			compare_count++;
			temp = arr[i];
			arr[i] = arr[i+1];
            arr[i+1] = temp;
         }
      }
	  for(k=0; k<arr_num; k++)
	  {
		printf("%d ", arr[k]);
	  }

	  printf("\tcompare_count = %d\n", compare_count);
   }
   return 0;
}
