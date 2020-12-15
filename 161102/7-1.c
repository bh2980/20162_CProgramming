#include <stdio.h>

int main(void)
{
	int numdaysmonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int year, month, date, moveday;

	printf("현재 날짜를 입럭하시오. <년 월 일> : ");
	scanf("%d %d %d", &year, &month, &date);

	if(numdaysmonth[month-1]<date||date<=0||0>=month||month>13)
		printf("잘못 입력하셨습니다.\n");

	else{
		if((year%4==0&&year%100!=0)||(year%400==0&&year%100!=0))
			numdaysmonth[1]=29;
		else
			numdaysmonth[1]=28;

		printf("날짜를 얼마만큼 옮기시겠습니까? <+/-> : ");
		scanf("%d", &moveday);

		if((date+moveday-1)>numdaysmonth[month-1]){
				
			int k=date+moveday;

			while(k>numdaysmonth[month-1]){
				k-=numdaysmonth[month-1];
				++month;
				if(month==13){
					month=month-12;
					++year;
					if((year%4==0&&year%100!=0)||(year%400==0&&year%100!=0))
						numdaysmonth[1]=29;
					else
						numdaysmonth[1]=28;
				}
			};

			date = k;

			printf("%d %d %d\n", year, month, date);

		}

		else if((date+moveday)==0){
			
			--month;
			if(month==0){
				month=month+12;
				--year;

				if((year%4==0&&year%100!=0)||(year%400==0&&year%100!=0))
					numdaysmonth[1]=29;
				else
					numdaysmonth[1]=28;
			}

			date = numdaysmonth[month-1];

			printf("%d %d %d\n", year, month, date);
		}

		else if((date+moveday)<0){

			int k=date+moveday;

			while(k<=0){
				--month;
				if(month==0){
					month=month+12;
					--year;

					if((year%4==0&&year%100!=0)||(year%400==0&&year%100!=0))
						numdaysmonth[1]=29;
					else
						numdaysmonth[1]=28;
				}
				k+=(numdaysmonth[month-1]);
			}

			date = k;

			printf("%d %d %d\n", year, month, date);
		}

		else
			printf("%d %d %d\n", year, month, date+moveday);
			
	}

	return 0;
}
