#include<stdio.h>

void RevChar(char *s);

int main(void) 
{
	char s[100];

	printf("IN  string : ");
	scanf("%s", s);
	RevChar(s);
	printf("OUT string : %s\n", s);

	return 0;
}

void RevChar(char *s)
{
	int temp, snum=0, i, j;

	while(s[snum]!='\0'){ 
		++snum;
	}

	if(snum%2==0){
		for(i=0; i<snum/2; i++){
			temp=*(s+i);
			*(s+i)=*(s+snum-1-i);
			*(s+snum-1-i)=temp;
		}
	}
	else{
		for(i=0; i<(snum-1)/2; i++){
			temp=*(s+i);
			*(s+i)=*(s+snum-1-i);
			*(s+snum-1-i)=temp;
		}
	}
} 
