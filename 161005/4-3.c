#include <stdio.h>

int copy_array(int arr1[], int arr2[]);
int isequal_array(int arr1[], int arr2[]);
int print_array(int arr[]);

int main(void)
{
	int i, k, n=0, l=0, isequal=0;
	int a[10], b[10];
	int c[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
	int d[7] = {1, 1, 1, 1, 1, 1, 1};

	for(i=0; i<10; i++)
	{
		scanf("%d", &k);
		a[i] = k;
	}

	printf("배열 a : ");
	print_array(a);

	printf("\n");

	printf("복사 전 배열 b : ");
	print_array(b);
	
	printf("\n");

	copy_array(a, b);

	printf("복사 후 배열 b : ");
	print_array(b);
	
	printf("\n");

	printf("배열 c : ");
	print_array(c);

	printf("\n");

	printf("배열 d : ");
	print_array(d);

	printf("\n");

	isequal = isequal_array(a, b);

	printf("a와 b 비교 : ");
	if(isequal==1)
		printf("같다.\n");
	else
		printf("다르다.\n");

	isequal = isequal_array(a, c);

	printf("a와 c 비교 : ");
	if(isequal==1)
		printf("같다.\n");
	else
		printf("다르다.\n");

	isequal = isequal_array(a, d);

	printf("a와 d 비교 : ");
	if(isequal==1)
		printf("같다.\n");
	else
		printf("다르다.\n");

	return 0;
}

int copy_array(int arr1[ ], int arr2[ ])
{
	int n, j;

	for(n=j=0; n<10; n++, j++)
	{
		arr2[n] = arr1[j];
	}

	return 0;
}

int isequal_array(int arr1[ ], int arr2[ ])
{
	int size1, size2, i, j, k;

	printf("각 배열의 크기를 입력하세요(a b) : ");
	scanf("%d %d", &size1, &size2);


	if(size1==size2){
		for(i=j=k=0; i<size1; i++, j++){
			if(arr1[i]==arr2[j])
				++k;

			else
				return 0;
		}
		if(k=size1)
			return 1;
	}

	else
		return 0;

}

int print_array(int arr[])
{
	int n;

	for(n=0; n<10; n++)
	{
		printf("%d ", arr[n]);
	}

	return 0;
}
