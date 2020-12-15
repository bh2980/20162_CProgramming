#include <stdio.h>
#include <math.h>

int main(void)
{
	int i=0, j=0, k=0, sum=0;
	int a[7];

	double average, b[7], V, sum2=0, s;

	printf("숫자 7개를 한개씩 적어주세요.\n");

	for(i=0; i<7; ++i)
	{
		printf("a[%d] : ", i);
		scanf("%d", &a[i]);

		sum += a[i];

	}
	printf("sum : %d\n", sum);

	average = (double)sum/i;
	printf("average : %.2lf\n", average);

	for(sum=i=j=0; i<7; ++i, ++j)
	{
		b[j] = (double)a[i] - average;

		sum2 += pow(b[j], 2);
	}

	V = sum2 / i;
	s = sqrt(V);

	printf("분산 V = %.2lf\n", V);
	printf("표준편차 s = %.2lf\n", s);

	return 0;
}
