#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int IDgen();
int stuans(int a[]);

int main(void)
{
	int tot_all, i, j, k;
	int stnum, asnum, tot_All=0;
	int answer[20] = {1, 4, 3, 2, 3, 1, 4, 1, 1, 3, 2, 4, 3, 2, 1, 1, 3, 2, 1};
	int stu1[20], stu2[20], stu3[20], stu4[20];
	srand((unsigned)time(NULL));

	printf("정답 : 1 4 3 2 3 1 4 1 1 3 2 4 3 2 1 1 3 2 1\n\n");

	printf("학번 입력 : ");
	IDgen();

	printf("정답 입력 : ");
	stuans(stu1);

	printf("\n");
	
	printf("학번 입력 : ");
	IDgen();

	printf("정답 입력 : ");
	stuans(stu2);

	printf("\n");
	
	printf("학번 입력 : ");
	IDgen();

	printf("정답 입력 : ");
	stuans(stu3);

	printf("\n");
	
	printf("학번 입력 : ");
	IDgen();

	printf("정답 입력 : ");
	stuans(stu4);

	printf("\n");

	printf("\n\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");

	for(i=j=k=0; i<20; i++, j++)
		if(answer[i]==stu1[j]){
			printf("O ");
			++k;
		}
		else
			printf("X ");
	
	tot_All = tot_All + k;
	printf("      tot : %d", k*5);
	printf("\n");

	for(i=j=k=0; i<20; i++, j++)
		if(answer[i]==stu2[j]){
			printf("O ");
			++k;
		}
		else
			printf("X ");
	
	tot_All = tot_All + k;
	printf("      tot : %d", k*5);
	printf("\n");

	for(i=j=k=0; i<20; i++, j++)
		if(answer[i]==stu3[j]){
			printf("O ");
			++k;
		}
		else
			printf("X ");
	
	tot_All = tot_All + k;
	printf("      tot : %d", k*5);
	printf("\n");

	for(i=j=k=0; i<20; i++, j++)
		if(answer[i]==stu4[j]){
			printf("O ");
			++k;
		}
		else
			printf("X ");
	
	tot_All = tot_All + k;
	printf("      tot : %d", k*5);
	printf("\n\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

	printf("tot_All : %d, ave : %.2lf\n", tot_All*5, (double)(tot_All*5)/4);

	return 0;
}

int IDgen()
{
	int i;

	for(i=0; i<1; i++)
		printf("%d\n", rand()%20+101);
}

int stuans(int a[])
{
	int i;

	for(i=0; i<20; i++){
		a[i]=rand()%3+1;
	}

	for(i=0; i<20; i++){
		printf("%d ", a[i]);
	}

	return 0;
}
