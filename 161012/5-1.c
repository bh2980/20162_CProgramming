#include <stdio.h>

void multiple(int a[], int n)
{
	int i;

	a[0] = n;

	for(i=0; i<8; i++){
		a[i+1]= a[i] + n;
	}
}


int main(void)
{
	int dan, gop, mtable[8][9];

	for(dan=0; dan<8; dan++)
	{
		multiple(mtable[dan], dan+2);
		printf("%d단 :", dan+2);

		for(gop=0; gop<9; gop++)
			printf(" %dx%d=%-3d", dan+2, gop+1, mtable[dan][gop]);

		printf("\n");
	}

	printf("-------------------------------------------\n");

	for(dan=0; dan<8; dan++)
		printf(" %d단    ", dan+2);

	printf("\n");
 
		for(gop=0; gop<9; gop++)
		{
			for(dan=0; dan<8; dan++)
				printf(" %dx%d=%-3d", dan+2, gop+1, mtable[dan][gop]);

			printf("\n");
		}
	return 0;
}
