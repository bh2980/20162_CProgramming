#include <stdio.h>
#define NUM_CITIES 12 
 
int main(void)
{
	int hour, min, i;
	char country[14];
	static const int time_offset[] = {-10, -7, -6, -5, -4, -3, 1, 2, 8, 9, 10, 13}; 

	printf("현재 시간을 입력하세요 <HH : MM> : ");
	scanf("%d : %d", &hour, &min);
	if(0<=hour<=24)
		if(hour==24){
			if(min==00){
				printf("현재 시각은 %d시 %d분입니다\n", hour, min);
				printf("가능한 도시는 다음과 같습니다.\n");
				printf("Honolulu, SanFrancisco, Denver, Chicago, NewYork, Santiago,\nLondon, Vienna, Singapore,Seoul, Sydney, Auckland\n");
				printf("도시를 입력하세요 : ");
				scanf("%s", country);
			}
			else
				printf("잘못된 입력입니다.");
		}
		else{
			if(00<=min<=59);
			else
				printf("잘못된 입력입니다.");
		}
	else
		printf("잘못된 입력입니다.");
		
}
