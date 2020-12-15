#include <stdio.h>

int main(void)
{
	int tot_all, i, j, k;
	int stnum, asnum, tot_All=0;
	int answer[20] = {1, 4, 3, 2, 3, 1, 4, 1, 1, 3, 2, 4, 3, 2, 1, 1, 3, 2, 1};
	int stu1[20], stu2[20], stu3[20], stu4[20];

	printf("정답 : 1 4 3 2 3 1 4 1 1 3 2 4 3 2 1 1 3 2 1\n\n");

	printf("학번 입력 : ");
	scanf("%d", &stnum);

	printf("정답 입력 : ");
	for(asnum=0; asnum<20; asnum++)
		scanf("%d", &stu1[asnum]);

	printf("\n");
	
	printf("학번 입력 : ");
	scanf("%d", &stnum);

	printf("정답 입력 : ");
	for(asnum=0; asnum<20; asnum++)
		scanf("%d", &stu2[asnum]);

	printf("\n");
	
	printf("학번 입력 : ");
	scanf("%d", &stnum);

	printf("정답 입력 : ");
	for(asnum=0; asnum<20; asnum++)
		scanf("%d", &stu3[asnum]);

	printf("\n");
	
	printf("학번 입력 : ");
	scanf("%d", &stnum);

	printf("정답 입력 : ");
	for(asnum=0; asnum<20; asnum++)
		scanf("%d", &stu4[asnum]);

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

	printf("tot_All : %d, ave : %lf", tot_All*5, (double)(tot_All*5)/4);

	return 0;
}
