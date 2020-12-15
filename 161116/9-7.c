int get_line_parameter(int x1, int y1, int x2, int y2, double *slope, double *yintercept);

int main(void) 
{ 
	int x1, y1, x2, y2; double a, b; 

	while(1){
		printf("x1 y1 x2 y2 : "); 
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2); 
		switch(get_line_parameter(x1, y1, x2, y2, &a, &b)){ 
			case -1 : printf("ERROR\n"); exit(1); 
			case 0  : if(b!=0)
						  printf("y = %g * x + %g\n", a, b);
					  else
						  printf("y = %g * x\n");
				break; 
			default: printf("again\n"); 
				break; 
		} 
	} 
	
	return 0; 
}

int get_line_parameter(int x1, int y1, int x2, int y2, double *slope, double *yintercept)
{
	if((x1-x2)==0)
		return -1;
	else{
		*slope = (y2-y1)/(x2-x1);
		*yintercept = y1 - ((*slope)*x1);

		return 0;
	}
}
